/*
    Title:     
    Authors:        
    Date:       
    Purpose:    
*/


#include <iostream>
#include "DvdShelf.h"

using namespace std;

int main () 
{
    
    int choice = 0;
    string title;
    string genre;
    int year;
    int length;
    Movie movie(title, genre, year, length);
    


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

        }

        else if (choice == 3) {


        }

    }

    cout << "\n\nYou have successfully quit the program." << endl;

    return 0;
}
