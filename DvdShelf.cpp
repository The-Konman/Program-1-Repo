/*



*/


#include "DvdShelf.h"
using namespace std;


//Function Definitions

/*
    Function Name: displayShelf()
          Purpose: Displays the entire shelf of movies
      Return Type: Void
*/
void displayShelf(DvdShelf currShelf, int movieCount)
{
    for(int i = 0; i<movieCount; i++)
    {
        cout << currShelf.shelf[i]->getTitle();
    }
    
}


/*
    Function Name: addMovies()
          Purpose: Adds movies the DvDShelf
      Return Type: Void
*/
void addMovies(DvdShelf shelf, string m)
{
    string title = m;
    string genre;
    int year;
    int length;
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