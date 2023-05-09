#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    bool ismale=true;
    bool istall=false;
    bool isfat=false;
    if(ismale && istall || isfat){
        cout<<"tall male may be fat";
    }else if (ismale && !istall){
        cout<<"short male ";
    }else{
        cout<<"error";
    }
    return 0;
}
