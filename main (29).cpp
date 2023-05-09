#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    bool ismale=true;
    bool istall=true;
    bool isfat=false;
    if(ismale && istall || isfat){
        cout<<"tall male may be fat";
    }else{
        cout<<"error";
    }
    return 0;
}
