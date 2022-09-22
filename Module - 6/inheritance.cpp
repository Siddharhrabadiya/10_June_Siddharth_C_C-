#include<iostream>
using namespace std;

char a[20],b[20],c[20];
int d,e,f,ch,r,t,h,i,j;
float ci,di;

class account
{
public:
    account()
    {
        cout<<"enter the first name : ";
        cin>>a;
        cout<<"enter the account number : ";
        cin>>d;
        cout<<"Account types : ";
        cin>>b;
    }
};
class sav_acct
{
public:
    sav_acct()
    {
        f=5000;
        cout<<"balance : "<<f<<endl;
        cout<<"deposite amount : ";
        cin>>e;
        j=e+f;
        cout<<"update balance : "<<j<<endl;
                r=10;
                t=2;
                ci=f*(1+r*t);
                cout<<"compute intreset : "<<ci<<endl;
                r=2.75;
                t=1;
                di=f*r*(t/100);
                cout<<"deposite intreset : "<<di<<endl;
        cout<<"1 withdraw"<<endl;
        cout<<"2  check balance"<<endl;
        cout<<"enter the choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter the withdraws amount : ";
                cin>>h;
                break;
            case 2:
                cout<<"update balance is : "<<j-h;
                break;
            default:
                cout<<"invalid choice.";
                break;
        }
        if (f>1000)
        {
            cout<<"penalty amount is 500rs per day."<<endl;
            i=500;
        }
        else
        {
            cout<<"updat balance : "<<j+i;
        }
    }
};
class curr_acct:public account,public sav_acct
{
public:
    curr_acct()
    {
        f=10000;
        cout<<"balance : "<<f<<endl;
        cout<<"deposite amount ";
        cin>>e;
        j=e+f;
        cout<<"update balance : "<<j<<endl;
                r=5.50;
                t=2;
                ci=f*(1+r*t);
                cout<<"compute intreset : "<<ci<<endl;
                r=3.75;
                t=1;
                di=f*r*(t/100);
                cout<<"deposite intreset : "<<di<<endl;
        cout<<"1 withdraw"<<endl;
        cout<<"2 check balance"<<endl;
        cout<<"enter the choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter the withdraws amount : ";
                cin>>h;
                break;
            case 2:
                cout<<"update balance is : "<<j-h<<endl;
                break;
            default:
                cout<<"invalid choice.";
                break;
        }
        if (f>4000)
        {
            cout<<"penalty amount is 1000rs per day."<<endl;
            i=1000;
        }
        else
        {
            cout<<"updat balance : "<<j+i;
        }
    }
};
int main()
{
    curr_acct c;
}
