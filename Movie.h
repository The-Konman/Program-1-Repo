/*



*/

#ifndef
#define MOVIE_H

class Movie {

    private:
        string title;
        string genre;
        *Rating movierating;
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
            return length;
        }

        //Setters
        void setTitle(int t) 
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
        
        


}


#endif
