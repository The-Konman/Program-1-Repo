/*
    Title: Rating.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Rating class definitions and member functions
*/

#include "DvdShelf.h"
    //Getters
    char Rating::getMovieRating() const
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
    void Rating::setMovieRating(char r)
    {
        movieRating = r;
    }
    void Rating::setBoxOffice(int bO)
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
        movieRating = 'N';
        boxOffice = 0;
        rottenTomatoScore = 0;
    }

    //Overloaded constructor
    Rating::Rating(char r, int bO, int rTS)
    {
        movieRating = r;
        boxOffice = bO;
        rottenTomatoScore = rTS;
    }
