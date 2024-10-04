/*
    Title: Rating.h  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Rating class header file
*/
#ifndef RATING_H
#define RATING_H
#include "DvdShelf.h"
#include "Movie.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Rating 
{

    private:

    string movieRating;
    int boxOffice;
    int rottenTomatoScore;



    public:
    //Getter prototypes
    string getMovieRating() const;
    int getBoxOffice() const;
    int getRTScore() const;
    //Setter prototypes
    void setMovieRating(string);
    void setBoxOffice(int);
    void setRTScore(int);
    //Constructor protoypes
    Rating(char, int, int);
    Rating();


};


#endif