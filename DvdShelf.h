/*



*/

#ifndef DVDSHELF_H
#define DVDSHELF_H
#include "Movie.h"

class DvdShelf {

    private:
        int shelfSize;
        Movie shelf[];


    public:
        //Getters
        int getShelfSize() const
        {
            return shelfSize;
        }
        int getShelf()
        {
            return shelf;
        }
        

        //Setters
        void setShelfSize(int s)
        {
            shelfSize = s;
        }

};




#endif
