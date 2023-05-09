#include <iostream>
#include <string>

using namespace std;

class Movie {
    private:
    string rating;

    public:
    string name;
    string director;

    Movie(string title, string dir, string rate) {
        name = title;
        director = dir;
        rating = rate;
        cout << "New movie created: " << name << ", directed by " << director << ", rated " << rating << endl;
    }
    void setrating(string rate){
        if(rate=="R"||rate=="nr"||rate=="pg"||rate=="pg-13"){
            rating=rate;
        }else{
            rating="NR";
        }
    }
    
    string getrating(){
        return rating;
    }
};

int main() {
    Movie my_movie("The Godfather", "Francis Ford Coppola", "R");
    // my_movie.rating("pg-13"); main not call private class
    my_movie.setrating("dog");
    cout<<my_movie.getrating();
    return 0;
}
