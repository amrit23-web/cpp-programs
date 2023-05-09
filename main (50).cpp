#include <iostream>
using namespace std;

class Detail{
    public:
    string name;
    char favletter;
    double pi;
    Detail(){
        cout<<"constructor"<<endl;
    }
};

int main()
{
    Detail obj1;
    obj1.name="amrit";
    obj1.favletter='s';
    obj1.pi=3.14;
    
    Detail obj2;
    obj2.name="aditya";
    obj2.favletter='a';
    obj2.pi=3.14;
    
    cout<<obj1.name<<obj1.pi<<obj1.favletter<<endl;

    cout<<obj2.name<<obj2.pi<<obj2.favletter<<endl;

    return 0;
}
