// **********************************************
// COSC 501 LAB #10
// Brendan Lauterborn
// PROGRAM-NAME: Lab10_2
// A simple description of the program
//***********************************************
//==========================================================
//movie.cpp
//==========================================================
#include <iostream>
#include <cstdlib>
using namespace std;
enum movie_review_stars{TOTAL=0,TERRIBLE,BAD,OK,GOOD,GREAT};

class Movie {
private:
    string movie_name;
    string mpaa_rating; //g, pg, pg-13, r
    //review counts by number of stars [1..5], counts sum at [TOTAL]
    int movie_reviews[6];
    
public:
    Movie(string name, string mpaa);
    void setMovie(string name);
    string getMovie();
    void setMPAA(string mpaa);
    string getMPAA();
    void setReviews(int review_counts[], int Nstars);
    void addReview(int stars);
    double getAvgStars();
    void printMovie();
};//class_Movie

//constructor
Movie::Movie(string name, string mpaa){
    movie_name = name;
    mpaa_rating = mpaa;
}
void Movie::setMovie(string name) {
    movie_name = name;
}
string Movie::getMovie(){
    return movie_name;
}
void Movie::setMPAA(string mpaa) {
    mpaa_rating = mpaa;
}
string Movie::getMPAA() {
    return mpaa_rating;
}
void Movie::setReviews(int review_counts[], int Nstars) {
    for(int i = 0; i < Nstars; i++){
        movie_reviews[i] = review_counts[i];
    }
}
void Movie::addReview(int stars) {
    if (stars >= 1 && stars <= 5) {
        movie_reviews[0]++;
        switch(stars){
            case 1:
                movie_reviews[1]++;
                break;
            case 2:
                movie_reviews[2]++;
                break;
            case 3:
                movie_reviews[3]++;
                break;
            case 4:
                movie_reviews[4]++;
                break;
            case 5:
                movie_reviews[5]++;
                break;
        }
    }
}
double Movie::getAvgStars() {
    double sum_rev_stars=0;
    double stars;
    for (int i=1; i<=5; i++) {
        sum_rev_stars += i * movie_reviews[i];
    }
    stars = sum_rev_stars / movie_reviews[0];
    //printf("\tsum_review_stars=%5.2f, reviews[0]=%d\n", sum_rev_stars, movie_reviews[TOTAL]);
    return stars;
}
void Movie::printMovie() {
    printf("\tmovie_name: %s\n", movie_name.c_str());
    printf("\tmpaa_rating: %s\n", mpaa_rating.c_str());
    for (int i=1; i<=5; i++) {
        //printf("\t%d star reviews: %d\n"...
        printf("\t%d star reviews: %d \n",i, movie_reviews[i]);
    }
    //printf("\tstars= %5.2f", getAvgStars());
    //printf("\tstars=%5.2f\n"...
    
}

//======================================================================
// main
//======================================================================
int main() {
    const int NSTARS=6;
    Movie m1("Third Man", "pg");
    int m1reviews[NSTARS] = {13,1,2,3,2,5}; //review counts
    m1.setReviews(m1reviews, NSTARS);

    Movie m2("Far Side of the World", "pg-13");
    int t2reviews[NSTARS] = {14,1,2,4,3,4}; //review counts
    m2.setReviews(t2reviews, NSTARS);

    //m1.add...
    m1.addReview(5);
    //m2.add...
    m2.addReview(1);

    printf("\n");
    //print m1...
    m1.printMovie();
    printf("\t%s\t%s\t%5.2f",m1.getMovie().c_str(), m1.getMPAA().c_str(), m1.getAvgStars());
    printf("\n\n");
    //print m2...
    m2.printMovie();
    printf("\t%s\t%s\t%5.2f",m2.getMovie().c_str(), m2.getMPAA().c_str(), m2.getAvgStars());
    printf("\n");
    return (0);
}
