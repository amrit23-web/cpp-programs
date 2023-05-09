#include <iostream>
using namespace std;

int main()
{
    int age=21;
    float gpa=8.89;
    string name="amrit";
    int *pAge=&age;
    cout<<"pointer var "<<*pAge<<endl;
    cout<<&name<<" "<<&age<<" "<<&gpa;
    return 0;
}
