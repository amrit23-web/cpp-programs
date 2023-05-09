#include <iostream>
using namespace std;
class Book{
    public:
    int page;
    Book(int id,int page,string name, bool avail){
        cout<<id<<" "<<page<<" "<<name<<" "<<avail<<endl;
        
    }
    bool honor(){
      if (page>=500){
          return true;
      }else{
          return false;
      }
  }
};
int main(){
    Book obj(01,568,"lords of rings",false);
    cout<< obj.honor()<<endl;
    return 0;
}