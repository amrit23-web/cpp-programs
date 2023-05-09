
#include <iostream>

using namespace std;

int power(int base,int num){
    int res=1;
    for(int i=0;i<num;i++){
        res=res*base;
    }return res;
}

int main()
{
    cout<<power(2,3);
    return 0;
}
