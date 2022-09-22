#include<iostream>
using namespace std;
class bank
{
public:
    bank ()
{
    char a[20], c[20];
    int b,d,f,choice,e;
    cout<<"name of the depositer :";
    cin>>a;
    cout<<"account number : ";
    cin>>b;
    cout<<"type of account: ";
    cin>>c;
    d=20000;
    cout<<"balance amount in account :"<<d<<endl;
    cout<< "Member function :"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"withdraw";
            break;
        case 2:
            cout<<"deposite";
            break;
        default:
            cout<<"Invalid choice" ;
            break;
    }
    cout<<"to assign value:";
    cin>>e;
    cout<<"deposite an amount :";
    cin>>f;
    cout<<"to withdraw an amount after checking balance to display name and balance : "<<a<<endl<<d-f;
    }
 };
int main()
{
    bank b1;
}
