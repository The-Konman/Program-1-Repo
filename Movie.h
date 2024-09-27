/*



*/

#ifndef MOVIE_H
#define MOVIE_H
#include "Rating.h"
using namespace std;

class Movie {

    private:
        string title;
        string genre;
        Rating* movierating;
        int year;
        int movieLength;


    public:
        //Getters
        string getTitle()const
        {
            return title;
        }
        string getGenre() const
        {
            return genre;
        }
        int getYear() const
        {
            return year;
        }
        int getMovieLength() const
        {
            return movieLength;
        }

        //Setters
        void setTitle(string t) 
        {
            title = t;
        }
        void setGenre(string g) 
        {
            genre = g;
        }
        void setYear(int y) 
        {
            year = y;
        }
        void setMovieLength(int m) 
        {
            movieLength = m;
        }
        //Overloaded constructor
        Movie(string t, string g, int y, int m) 
        { 
            title = t;
            genre = g;
            year = y;
            movieLength = m;
        }
        
        


};


#endif
