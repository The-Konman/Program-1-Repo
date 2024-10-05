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
    //Print all movie data at each element
    for(int i = 0; i<movieCount; i++)
    {
        cout << "\n\nMovie " << i+1;
        cout << "\nTitle: " << movieArr[i]->getTitle();
        cout << "\nGenre: " << movieArr[i]->getGenre();
        cout << "\nYear: "<< movieArr[i]->getYear();
        cout << "\nLength: " << movieArr[i]->getMovieLength();
        cout << "\n\nMovie ratings and statistics ";
        cout << "\nRating: " << movieArr[i]->movieRating.getMovieRating();
        cout << "\nBox Office: " << movieArr[i]->movieRating.getBoxOffice();
        cout << "\nRotten Tomatoes %" << movieArr[i]->movieRating.getRTScore();
    }
}


/*
    Function Name: addMovies()
          Purpose: Adds movies the DvDShelf
      Return Type: Movie
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

    return movie;
}

/*
    Function Name: removeMovies()
          Purpose: Removes movies from the shelf
      Return Type: int
*/
int DvdShelf::removeMovies(Movie ** movieArray, int movieCount, string titleRemoval)
{
    int index = 0, removalIndex;
    bool removalBool;
    //Linear search algorithm to find which element to delete
    while(index<movieCount&&!removalBool)
            {
                if(movieArray[index]->getTitle()==titleRemoval)
                {
                    removalBool = true;
                    removalIndex = index;
                }
                index++;
            }
            //Move all elements back one if the title is found
            if(removalBool==true)
            {
                for(int i = removalIndex; i<movieCount; i++)
                {
                    movieArray[removalIndex]->setTitle(movieArray[removalIndex+1]->getTitle());
                    movieArray[removalIndex]->setGenre(movieArray[removalIndex+1]->getGenre());
                    movieArray[removalIndex]->setMovieLength(movieArray[removalIndex+1]->getMovieLength());
                    movieArray[removalIndex]->setYear(movieArray[removalIndex+1]->getYear());
                    movieArray[removalIndex]->movieRating.setBoxOffice(movieArray[removalIndex+1]->movieRating.getBoxOffice());
                    movieArray[removalIndex]->movieRating.setMovieRating(movieArray[removalIndex+1]->movieRating.getMovieRating());
                    movieArray[removalIndex]->movieRating.setRTScore(movieArray[removalIndex+1]->movieRating.getRTScore());

                }
                //Returns the index where the title was found
                return(removalIndex);
            }
            //Otherwise, 
            else
            {
                return(-1);
            }
}




void DvdShelf::loadFromFile(string file) 
{
    string genre, title, mR;
    int year, length, numMovies, bO, rT;
    Movie movie;
    fstream inFile;
    inFile.open(file);
    if (!inFile.is_open()) {
        cout << "\nSorry, we were unable to open the file." << endl;
    }
    else {
        while (!inFile.eof()) {
            getline(inFile, title);
            movie.setTitle(title);

            getline(inFile, genre);
            movie.setGenre(genre);

            inFile >> year;
            movie.setYear(year);

            inFile >> length;
            movie.setMovieLength(length);

            getline(inFile, mR);
            movie.movieRating.setMovieRating(mR);

            inFile >> bO;
            movie.movieRating.setBoxOffice(bO);

            inFile >> rT;
            movie.movieRating.setRTScore(rT);
        }
    }
    
}



/*
    Function Name: addToFile()
          Purpose: Adds movieArray data to a file
      Return Type: Void
*/
void DvdShelf::addToFile(Movie ** movieArr, int movieCount, string fileName)
{
    ofstream outFile;
    outFile.open(fileName);
    if (!outFile.is_open()) {
        cout << "\nSorry, we were unable to open the file." << endl;
    }
    else 
    {
        for(int i = 0; i<movieCount; i++)
        {
            outFile << movieArr[i]->getTitle() << endl;
            outFile << movieArr[i]->getGenre() << endl;
            outFile << movieArr[i]->getYear() << endl;
            outFile << movieArr[i]->getMovieLength() << endl;
            outFile << movieArr[i]->movieRating.getMovieRating() << endl;
            outFile << movieArr[i]->movieRating.getBoxOffice() << endl;
            outFile << movieArr[i]->movieRating.getRTScore() << endl;
        }
    }
    outFile.close();
    cout << "\n\nDone writing to file.";

}