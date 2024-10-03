/*
    Title:     
    Authors:        
    Date:       
    Purpose:    
*/

#include "DvdShelf.h"


int main () 
{
    
    int choice = 0;
    string title;
    Movie movie;
    DvdShelf shelf;
    


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
            cout << "What is the title of the movie you want to add?\t";

            cin.ignore();
            getline(cin, title);
            shelf.addMovies(shelf, title);



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

        }

        else if (choice == 2) {

            cout << "\n\nYou have chosen to remove a movie." << endl;
            cout << "what is the title of the movie you want to remove?\t";

            cin.ignore();
            getline (cin, title);
            

        }

        else if (choice == 3) {


        }

    }

    cout << "\n\nYou have successfully quit the program." << endl;

    return 0;
}
