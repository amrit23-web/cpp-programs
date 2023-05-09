#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cout<<"enter a";
    cin>>a;
    int rev;
    while (a!=0){
    rev=rev*10+a%10;
    a/=10;
    }
    cout<<"reverse is "<<rev;
    return 0;
}