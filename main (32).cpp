#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int getmax(int x,int y,int z){
    if(x>y && x>z){
        cout<<x<<" x is greater ";
    }else if(z>y && z>x){
        cout<<z<<" z is greater ";
    }
    else{
        cout<<y<<" y is greater ";
    }
    return 0;
}
int main(){
    getmax(91,43,212);
    return 0;
}
