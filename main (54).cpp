#include <iostream>
#include <string>

using namespace std;

class Movie {
    public:
    string name;//for blueprint of data
    string director;
    string rating;

    Movie(string title, string dir, string rate) {
        name = title;//for encapsulation of data
        director = dir;
        rating = rate;
        cout << "New movie created: " << name << ", directed by " << director << ", rated " << rating << endl;
    }
};

int main() {
    Movie my_movie("The Godfather", "Francis Ford Coppola", "R");
    return 0;
}
