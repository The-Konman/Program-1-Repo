/*
    Title: Rating.h  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Rating class header file
*/
#ifndef RATING_H
#define RATING_H
#include "DvdShelf.h"

class Rating 
{

    private:

    int movieRating;
    int boxOffice;
    int rottenTomatoScore;



    public:
    //Getter prototypes
    int getMovieRating() const;
    int getBoxOffice() const;
    int getRTScore() const;
    //Setter prototypes
    void setMovieRating(double);
    void setBoxOffice(double);
    void setCriticReview(int);
    //Constructor protoypes
    Rating(int, int, int);
    Rating();

};


#endif