/*



*/
#ifndef RATING_H
#define RATING_H

class Rating 
{

    private:

    int movieRating;
    int boxOffice;
    int rottenTomatoScore;



    public:

    int getMovieRating() const
    {
        return movieRating;

    }

    int getBoxOffice() const
    {
        return boxOffice;

    }

    int getRTScore() const
    {
        return rottenTomatoScore;
    }
    


    void setMovieRating(double mR)
    {
        movieRating = mR;
    }

    void setBoxOffice(double bO)
    {
        boxOffice = bO;
    }
    
    void setCriticReview(int rTS)
    {
        rottenTomatoScore = rTS;
    }
    



    Rating(int mR, int bO, int rTS)
    {
        movieRating = mR;
        boxOffice = bO;
        rottenTomatoScore = rTS;
        
    }



};


#endif
