#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string day(int daynum){
    string dayname;
    switch(daynum){
        case 0:
        dayname="sunday";
        break;
        case 1:
        dayname="saturday";
        break;
        default:
        dayname="workday";
    }
    return dayname;
}

int main(){
    cout<<day(0)<<endl;
    return 0;
}
