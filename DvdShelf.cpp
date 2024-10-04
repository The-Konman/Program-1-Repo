/*
    Title: DvdShelf.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: DvdShelf class definitons and functions
*/

#include "DvdShelf.h"


    //Constructor
    DvdShelf::DvdShelf()
    {

    }
    //Destructor
    DvdShelf::~DvdShelf()
    {
        cout << "\n\nDeleting the Dvd Shelf!\n\n";
    }










/*
    Function Name: displayShelf()
          Purpose: Displays the entire shelf of movies
      Return Type: Void
*/
void displayShelf(Movie ** movieArr, int movieCount)
{
    //Still working on this one
    for(int i = 0; i<movieCount; i++)
    {
        cout << "\n\nMovie " << i+1;
        cout << "\nTitle: " << movieArr[i]->getTitle();
        cout << "\nGenre: " << movieArr[i]->getGenre();
        cout << "\nYear: "<< movieArr[i]->getYear();
        cout << "\nLength: " << movieArr[i]->getMovieLength();
        cout << "\nMovie ratings and statistics:";
        cout << "\nRating: " << movieArr[i]->movieRating.getMovieRating();
        cout << "\nBox Office: " << movieArr[i]->movieRating.getBoxOffice();
        cout << "\nRotten Tomatoes %" << movieArr[i]->movieRating.getRTScore();
    }
}


/*
    Function Name: addMovies()
          Purpose: Adds movies the DvDShelf
      Return Type: Void
*/
Movie addMovies()
{
    string genre, title;
    int year, length, numMovies;
    Movie movie;


    cout << "\n\nWhat is the title of your movie?\t";
    cin.ignore();
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

    cout << "\nTitle: " << movie.getTitle();
    cout << "\nGenre: " << movie.getGenre();
    cout << "\nYear: " << movie.getYear();
    cout << "\nLength (in Minutes): " << movie.getMovieLength();

    return movie;
}

/*
    Function Name: removeMovies()
          Purpose: Removes movies from the shelf
      Return Type: Void
*/
void removeMovies(DvdShelf, Movie)
{


}