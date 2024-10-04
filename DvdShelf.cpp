/*
    Title: DvdShelf.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: DvdShelf class definitons and functions
*/

#include "DvdShelf.h"

/*
    Function Name: displayShelf()
          Purpose: Displays the entire shelf of movies
      Return Type: Void
*/
void displayShelf(DvdShelf currShelf, int movieCount)
{
   
    
}


/*
    Function Name: addMovies()
          Purpose: Adds movies the DvDShelf
      Return Type: Void
*/
void addMovies(DvdShelf shelf, string m)
{
    string genre, title = m;
    int year, length;

    Movie movie;

    movie.setTitle(title);
    
    cout << "\n\nWhat genre is " << title << "?\t";
            
    getline(cin, genre);
    movie.setGenre(genre);

    cout << "\n\nWhat year did " << title << " come out?\t";

    cin >> year;
    movie.setYear(year);

    cout << "\n\nHow long is " << title << " in minutes?\t";

    cin >> length;
    movie.setMovieLength(length);
    
    cout << "\n\nYour movie has been added." << endl;

    cout << "Title: " << movie.getTitle();
    cout << "\nGenre: " << movie.getGenre();
    cout << "\nYear: " << movie.getYear();
    cout << "\nLength (in Minutes): " << movie.getMovieLength();
}

/*
    Function Name: removeMovies()
          Purpose: Removes movies from the shelf
      Return Type: Void
*/
void removeMovies(DvdShelf, Movie)
{


}