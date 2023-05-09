#include <iostream>
using namespace std;

class Detail{
    public:
    string name;
    char favletter;
    double pi;
};

int main()
{
    Detail obj1;
    obj1.name="amrit";
    obj1.favletter='s';
    obj1.pi=3.14;
    
    cout<<obj1.name<<endl;
    cout<<obj1.pi<<endl;
    cout<<obj1.favletter<<endl;

    return 0;
}
