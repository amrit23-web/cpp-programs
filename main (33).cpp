#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int x;
    cout<<"enter x ";
    cin>>x;
    
    char op;
    cout<<"enter operation ";
    cin>>op;
    
    int y;
    cout<<"enter y ";
    cin>>y;
    
    int res;
    if(op=='+'){
        res=x+y;
    }else if(op=='-'){
        res=x-y;
    }else if(op=='*'){
        res=x*y;
    }else if(op=='/'){
        res=x/y;
    }else{
        cout<<"invalid";
    }
    cout<<res<<endl;
    return 0;
}
