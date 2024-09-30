/*



*/

#ifndef DVDSHELF_H
#define DVDSHELF_H
#include "Movie.h"
#include "Rating.h"
#include <iomanip>
#include <iostream>

class DvdShelf {

        

    public:
        int movieCount;
        Movie** shelf;

        //Getters
        int getMovieCount() const
        {
            return movieCount;
        }
        Movie** getShelf()
        {
            return shelf;
        }

        

        //Setters
        void setShelfSize(int c)
        {
            movieCount= c;
        }

        //Overloaded constructor
        DvdShelf(int movieCount, Movie** shelf)
        {
            this->movieCount = movieCount;
            this->shelf = shelf;
        }

        //Default constructor
        DvdShelf()
        {
            this->movieCount = 0;
            this->shelf = 0;
        }

        //Destructor
        ~DvdShelf()
        {
            cout << "\n\nDeleting the Dvd Shelf!\n\n";
        }

};




#endif
