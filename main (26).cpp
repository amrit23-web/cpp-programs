#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void sayhi(string name,int age);

int main(){
    cout<<"top"<<endl;
    sayhi("amrit",21);
    sayhi("aditya",23);

    return 0;
}
void sayhi(string name,int age){
    cout<<"hello "<<name<<age<<endl;
}
