#include<iostream>
using namespace std;

    char a[20],c[20];
    int b,f;
    float d;

class person
{
public:
    person()
    {
        cout<<"enter the name : ";
        cin>>a;
        cout<<"Enter the age : ";
        cin>>b;
    }
};
class student
{
public:
     student()
    {
         cout<<"enter percentage : ";
         cin>>d;
    }
};
class teacher:public person,public student
{
public:
    teacher()
    {
        cout<<"teacher name : ";
        cin>>c;
        cout<<"teacher salary : ";
        cin>>f;
    }
};
int main()
{
    teacher t;
}
