/*
    Title: DvdShelf.cpp  
  Authors: Konnor Lorance, George Vaporis, Madeline Griffin
     Date: 10/4/2024
  Purpose: DvdShelf class definitons and functions
*/

#include "DvdShelf.h"

    //Constructor
    DvdShelf::DvdShelf()
    {}
 









/*
    Function Name: displayShelf()
          Purpose: Displays the entire shelf of movies
      Return Type: Void
*/
void DvdShelf::displayShelf(Movie ** movieArr, int movieCount)
{
    //Still working on this one
    for(int i = 0; i<movieCount; i++)
    {
        cout << "\n\nMovie " << i+1;
        cout << "\nTitle: " << movieArr[i]->getTitle();
        cout << "\nGenre: " << movieArr[i]->getGenre();
        cout << "\nYear: "<< movieArr[i]->getYear();
        cout << "\nLength: " << movieArr[i]->getMovieLength();
        cout << "\nMovie ratings and statistics ";
        cout << "\nRating: " << movieArr[i]->movieRating.getMovieRating();
        cout << "\nBox Office: " << movieArr[i]->movieRating.getBoxOffice();
        cout << "\nRotten Tomatoes %" << movieArr[i]->movieRating.getRTScore();
    }
}


/*
    Function Name: addMovies()
          Purpose: Adds movies the DvDShelf
      Return Type: Void
*/
Movie DvdShelf::addMovies()
{
    string genre, title, mR;
    int year, length, numMovies, bO, rT;
    Movie movie;


    cout << "\n\nWhat is the title of your movie?\t";
    cin.ignore();
    getline(cin, title);
    movie.setTitle(title);
    
    cout << "\n\nWhat genre is " << title << "?\t";
            
    getline(cin, genre);
    movie.setGenre(genre);

    cout << "\n\nWhat year did " << title << " come out?\t";

    cin >> year;
    movie.setYear(year);

    cout << "\n\nHow long is " << title << " in minutes?\t";

    cin >> length;
    movie.setMovieLength(length);

    cout << "\n\nWhat is " << title << " rated?(G, PG, PG13, M)\t";

    cin >> mR;
    movie.movieRating.setMovieRating(mR);

    
    cout << "\n\nWhat is " << title << "s box office?\t$";

    cin >> bO;
    movie.movieRating.setBoxOffice(bO);

    cout << "\n\nWhat is " << title << "s rotten tomatoe score?\t%";

    cin >> rT;
    movie.movieRating.setRTScore(rT);

    cout << "\n\nYour movie has been added." << endl;

    cout << "\nTitle: " << movie.getTitle();
    cout << "\nGenre: " << movie.getGenre();
    cout << "\nYear: " << movie.getYear();
    cout << "\nLength (in Minutes): " << movie.getMovieLength();

    return movie;
}

/*
    Function Name: removeMovies()
          Purpose: Removes movies from the shelf
      Return Type: Void
*/
int DvdShelf::removeMovies(Movie ** movieArray, int movieCount, string titleRemoval)
{
    int index = 0, removalIndex;
    bool removalBool;

    while(index<movieCount&&!removalBool)
            {
                if(movieArray[index]->getTitle()==titleRemoval)
                {
                    removalBool = true;
                    removalIndex = index;
                }
                index++;
            }

            if(removalBool==true)
            {
                movieArray[removalIndex]->setTitle("N/A");
                movieArray[removalIndex]->setGenre("N/A");
                movieArray[removalIndex]->setMovieLength(0);
                movieArray[removalIndex]->setYear(0);
                movieArray[removalIndex]->movieRating.setBoxOffice(0);
                movieArray[removalIndex]->movieRating.setMovieRating("N/A");
                movieArray[removalIndex]->movieRating.setRTScore(0);
                return(removalIndex);
            }
            else
            {
                return(-1);
            }
}



/*
void loadFromFile(string file) 
{
    fstream inFile;
    inFile.open(file);
    if (!inFile.is_open()) {
        cout << "\nSorry, we were unable to open the file." << endl;
    }
    else {
        while (!inFile.eof()) {
            getline(inFile, )
        }
    }
    
}
*/