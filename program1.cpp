/*
    Title: program1.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Menu based program simulation of a shelf of Dvds containing different movies.
*/

#include "DvdShelf.h"


int main () 
{
    int choice = 0, movieCount = 0, removalIndex;
    int MAX_SIZE = 100;
    string inFileName, titleRemoval, outFileName;
    Movie currMovie;
    DvdShelf shelf;
    //Dynamically allocate array of pointers to movie objects
    shelf.movieArray = new Movie*[MAX_SIZE];

    do
    {
    cout << "\n\nWelcome to the Dvd Shelf" << endl<< endl;

    cout << "1. Load Movies from File" << endl;
    cout << "2. Save Movies to File" << endl;
    cout << "3. Add Movie" << endl;
    cout << "4. Remove Movie" << endl;
    cout << "5. Display Movies" << endl;
    cout << "6. Quit Program" << endl;

    cout << "Pick an option from above\t";
    cin >> choice;

    while (choice < 1 || choice > 6) {

        cout << "\n\nPlease select a valid option";
        cin >> choice;
    }


        if (choice == 1) {
            cout << "\n\nYou have chosen to load movies from a file" << endl;
            cout << "\nWhat is the name of the file you would like to load movies from?" << endl;
            
            cin.ignore();
            getline(cin, inFileName);
            //shelf.loadFromFile(inFileName);
            
        }

        else if (choice == 2) {
            cout << "\n\nYou have chosen to add movies to a file" << endl;
            cout << "\nWhat is the name of the file you would like to add movies to?" << endl;
            cin.ignore();
            getline(cin, outFileName);
            shelf.addToFile(shelf.movieArray, movieCount, outFileName);

        }

        else if (choice == 3) {

            cout << "\n\nYou have chosen to add a movie to the shelf." << endl;

            currMovie = shelf.addMovies();

            //Add the function information to the movieArray
            shelf.movieArray[movieCount] = new Movie(currMovie.getTitle(), currMovie.getGenre(), 
            currMovie.movieRating, currMovie.getMovieLength(), currMovie.getYear());

            movieCount = movieCount+1;
        }

        else if (choice == 4) {

            cout << "\n\nYou have chosen to remove a movie." << endl;
            cout << "\nHere are the movies currently on the shelf: ";
            for(int i = 0; i<movieCount; i++)
            {
                cout << "\n\nMovie " << i+1 << ":";
                cout << endl << shelf.movieArray[i]->getTitle();

            }

            cout << "\nWhat is the title of the movie you want to remove?\t";
            cin.ignore();
            getline(cin, titleRemoval);
            removalIndex = shelf.removeMovies(shelf.movieArray, movieCount, titleRemoval);
            if(removalIndex!=-1)
            {
                movieCount--;
                cout << "\nYou successfully removed " << titleRemoval;
            }
            else
            {
                cout << "\nThat movie was not found!";
            }
            
            

        }

        else if (choice == 5) {
            
            cout << "\n\nYou have chosen to Display Movies." << endl;

            shelf.displayShelf(shelf.movieArray, movieCount);

        }

    }while (choice != 6);

    cout << "\n\nYou have successfully quit the program." << endl;

    return 0;
}
