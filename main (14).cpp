#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cout<<"enter x ";
    cin>>x;
    
    int y;
    cout<<"enter y ";
    cin>>y;
    
    cout<<"maximum number is "<<fmax(x,y)<<endl;
    cout<<"addition is "<<x+y<<endl;
    cout<<"subtration is "<<x-y<<endl;
    cout<<"multiplication is "<<x*y<<endl;
    cout<<"division is "<<x/y<<endl;
}