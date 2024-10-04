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
    char getMovieRating() const;
    int getBoxOffice() const;
    int getRTScore() const;
    //Setter prototypes
    void setMovieRating(char);
    void setBoxOffice(int);
    void setCriticReview(int);
    //Constructor protoypes
    Rating(char, int, int);
    Rating();
    //Destructor prototype
    ~Rating();

};


#endif