#include <iostream>
using namespace std;
int main(){
    string name="okay buddy bye";
    string subname;
    name[2]='s';
    cout<<"hello buddy"<<endl;
    cout<<name.length()<<endl;
    cout<<name<<endl;
    cout<<name.find("buddy")<<endl;
    cout<<name[2]<<endl;
    subname=name.substr(5,10);
    cout<<subname<<endl;
    return 0;
}