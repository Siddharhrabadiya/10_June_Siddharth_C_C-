#include<iostream>
using namespace std;
class intreset
{
    float rate=2.5;
    int princple,year,si;
public:
    intreset()
    {
    
        cout<<"enter the princple : ";
        cin>>princple;
        cout<<"enter the year : ";
        cin>>year;
        cout<<"enter the rate : "<<rate<<endl;
        
    }
    void display()
    {
        si=(princple*year*rate)/100;
        cout<<"simple intreset : "<<si<<endl;
    }
};
int main()
{
    intreset i;
    i.display();
    return 0;
}
