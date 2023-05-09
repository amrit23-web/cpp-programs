#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int getmax(int x,int y){
    int res;
    if(x>y){
        cout<<x<<" x is greater ";
    }else{
        cout<<y<<" y is greater ";
    }
    return res;
}
int main(){
    getmax(9,14);
    return 0;
}
