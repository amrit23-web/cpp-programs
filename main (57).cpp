#include <iostream>
using namespace std;

class Chef{
    public:
    void chicken(){
        cout<<"chef can make chicken"<<endl;
    }
    void cake(){
        cout<<"chef can bake a cake"<<endl;
    }
    void cookie(){
        cout<<"chef not makes cookie"<<endl;
    }
    void special(){
        cout<<"chef makes cheescake"<<endl;
    }
};

class Indianchef : public Chef{
    public:
    void rice(){
        cout<<"indian chef can cook rice"<<endl;
    }
    void special(){
        cout<<"indian chef makes baakon"<<endl;
    }
};

int main()
{
    Chef obj;
    obj.cookie();
    obj.special();
    
    Indianchef obj2;
    obj2.cake();
    obj2.rice();
    obj2.special();
    return 0;
}
