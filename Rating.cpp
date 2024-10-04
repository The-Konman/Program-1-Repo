/*
    Title: Rating.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Rating class definitions and member functions
*/

#include "DvdShelf.h"
    //Getters
    int Rating::getMovieRating() const
    {
        return movieRating;

    }
    int Rating::getBoxOffice() const
    {
        return boxOffice;

    }
    int Rating::getRTScore() const
    {
        return rottenTomatoScore;
    }

    //Setters
    void Rating::setMovieRating(double mR)
    {
        movieRating = mR;
    }
    void Rating::setBoxOffice(double bO)
    {
        boxOffice = bO;
    }
    void Rating::setCriticReview(int rTS)
    {
        rottenTomatoScore = rTS;
    }

    //Default Constructor
    Rating::Rating()
    {
        movieRating = 0;
        boxOffice = 0;
        rottenTomatoScore = 0;
    }

    //Overloaded constructor
    Rating::Rating(int mR, int bO, int rTS)
    {
        movieRating = mR;
        boxOffice = bO;
        rottenTomatoScore = rTS;
    }
