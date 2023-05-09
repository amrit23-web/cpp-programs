#include <iostream>
using namespace std;
class Book{
    public:
    char fav;
    Book(int id,int page,string name, bool avail){
        cout<<id<<" "<<page<<" "<<name<<" "<<avail<<endl;
  }  
};
int main(){
    Book obj(01,568,"lords of rings",false);
    // obj.fav='s';
    // cout<<obj.fav<<endl;
    return 0;
}