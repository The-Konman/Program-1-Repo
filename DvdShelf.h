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
#include <string>
using namespace std;

class DvdShelf { 

    public:

        int movieCount;
        Movie ** movieArray;
        Movie movie;

    //Function Prototypes
    Movie addMovies();
    Movie removeMovies();
    void displayShelf(Movie **, int);
    //void addToFile(DvdShelf, Movie);
    //void loadToFile(DvdShelf, Movie);  

    //Default constructor
    DvdShelf();

    //Destructor
    ~DvdShelf();

};




#endif