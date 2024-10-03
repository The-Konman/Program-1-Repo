/*




*/

#include "DvdShelf.h"

        string Movie::getTitle() const
        {
            return title; 
        }
        string Movie::getGenre() const
        {
            return genre;
        }
        int Movie::getYear() const
        {
            return year;
        }
        int Movie::getMovieLength() const
        {
            return movieLength;
        }

        //Setters
        void Movie::setTitle(string t) 
        {
            title = t;
        }
        void Movie::setGenre(string g) 
        {
            genre = g;
        }
        void Movie::setYear(int y) 
        {
            year = y;
        }
        void Movie::setMovieLength(int m) 
        {
            movieLength = m;
        }

        Movie::Movie()
        {
            
        }