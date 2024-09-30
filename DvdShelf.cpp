/*



*/


#include "DvdShelf.h"
using namespace std;

//Function prototypes
void addMovies(DvdShelf, Movie);
void removeMovies(DvdShelf, Movie);
void displayShelf(DvdShelf, int);
//void addToFile(DvdShelf, Movie);
//void loadToFile(DvdShelf, Movie);


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
void addMovies(DvdShelf, Movie)
{


}


/*
    Function Name: removeMovies()
          Purpose: Removes movies from the shelf
      Return Type: Void
*/
void removeMovies(DvdShelf, Movie)
{


}