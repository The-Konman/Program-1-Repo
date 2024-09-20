/*
    Title:     
    Authors:        
    Date:       
    Purpose:    
*/


#include <iostream>
#include "DvdShelf.h"
#include "Movie.h"

using namespace std;

int main () 
{
    
    int choice = 0;

    cout << "\n\nWelcome to the Dvd Shelf" << endl<< endl;

    cout << "1. Add Movie" << endl;
    cout << "2. Remove Movie" << endl;
    cout << "3. Display Movies" << endl;
    cout << "4. Quit Program" << endl;

    cout << "Pick an option from above";
    cin >> choice;

    while (choice < 1 || choice > 4) {

        cout << "\n\nPlease select a valid option";
        cin >> choice;
    }



    while (choice != 4) {

        if (choice == 1) {

        }

        else if (choice == 2) {

        }

        else if (choice == 3) {


        }

    }

    cout << "\n\nYou have succefully quit the program." << endl;

    return 0;
}
