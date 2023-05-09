
#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int fact=1;
    while(a<=5){
        fact=fact*a;
        a++;
    }
    cout<<"sum of factorial "<<fact<<endl;
    return 0;
}
