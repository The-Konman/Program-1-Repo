/*
    Title: DvdShelf.h  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: DvdShelf class header file
*/

#ifndef DVDSHELF_H
#define DVDSHELF_H
#include "Movie.h"
#include "Rating.h"
#include <iomanip>
#include <iostream>
using namespace std;

class DvdShelf {

        

    public:
        Movie *moviePtr;
        int movieCount;
        Movie ** movieArray;

    void addMovies(DvdShelf, string);
    void removeMovies(DvdShelf, string);
    void displayShelf(DvdShelf, int);
    //void addToFile(DvdShelf, Movie);
    //void loadToFile(DvdShelf, Movie);  

    //Overloaded constructor
    DvdShelf(int movieCount, Movie* shelf[])
    {
        this->movieCount = movieCount;
       // this->shelf = shelf;
    }

    //Default constructor
    DvdShelf()
    {
        this->movieCount = 0;
       // this->shelf = 0;
    }

    //Destructor
    ~DvdShelf()
    {
        cout << "\n\nDeleting the Dvd Shelf!\n\n";
    }

};




#endif