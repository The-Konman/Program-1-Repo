/*
    Title: Movie.h
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: Movie class header file
*/

#ifndef MOVIE_H
#define MOVIE_H
#include "DvdShelf.h"

class Movie {

    private:

        string title;
        string genre;
        int year;
        int movieLength;

    public:
        Rating movieRating;
        //Getter prototypes
        string getTitle() const;
        string getGenre() const;
        int getYear() const;
        int getMovieLength() const;
        //Setter prototypes
        void setTitle(string);
        void setGenre(string);
        void setYear(int);
        void setMovieLength(int);

        //Constructor prototype
        Movie();
        Movie(string, string, Rating, int, int);
        //Destructor Prototype
        ~Movie();


};


#endif
