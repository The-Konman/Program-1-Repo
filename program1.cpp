/*
    Title: program1.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Menu based program simulation of a shelf of Dvds containing different movies.
*/

#include "DvdShelf.h"


int main () 
{
    
    int choice = 0, movieCount = 0;
    int MAX_SIZE = 100;
    Movie currMovie;
    DvdShelf shelf;
    //Dynamically allocate array of pointers to movie objects
    shelf.movieArray = new Movie*[MAX_SIZE];

    cout << "\n\nWelcome to the Dvd Shelf" << endl<< endl;

    cout << "1. Add Movie" << endl;
    cout << "2. Remove Movie" << endl;
    cout << "3. Display Movies" << endl;
    cout << "4. Quit Program" << endl;

    cout << "Pick an option from above\t";
    cin >> choice;

    while (choice < 1 || choice > 4) {

        cout << "\n\nPlease select a valid option";
        cin >> choice;
    }



    while (choice != 4) {

        if (choice == 1) {

            cout << "\n\nYou have chosen to add a movie." << endl;

            currMovie = shelf.addMovies();

            //Add the function information to the movieArray
            shelf.movieArray[movieCount] = new Movie(currMovie.getTitle(), currMovie.getGenre(), 
            currMovie.movieRating, currMovie.getMovieLength(), currMovie.getYear());


            cout << "\n\n\nWhat would you like to do next?" << endl;
            cout << "1. Add Movie" << endl;
            cout << "2. Remove Movie" << endl;
            cout << "3. Display Movies" << endl;
            cout << "4. Quit Program" << endl;

            cout << "Pick an option from above\t";
            cin >> choice;

            while (choice < 1 || choice > 4) {

                cout << "\n\nPlease select a valid option";
                cin >> choice;
            }
            
            movieCount++;

        }

        else if (choice == 2) {

            cout << "\n\nYou have chosen to remove a movie." << endl;
            cout << "what is the title of the movie you want to remove?\t";

            //cin.ignore();
            //getline (cin, title);
            

        }

        else if (choice == 3) {
            
            cout << "\n\nYou have chosen to Display Movies." << endl;

            shelf.displayShelf(shelf.movieArray, movieCount);

        }

    }

    cout << "\n\nYou have successfully quit the program." << endl;

    return 0;
}
