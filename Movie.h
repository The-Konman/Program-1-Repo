/*



*/

#ifndef MOVIE_H
#define MOVIE_H
#include "DvdShelf.h"

class Movie {

    private:
        string title;
        string genre;
        Rating* movierating;
        int year;
        int movieLength;

    public:
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
        //Destructor Prototype
        ~Movie();


};


#endif
