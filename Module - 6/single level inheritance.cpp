#include<iostream>
using namespace std;
class cricket
{
public:
    int a,b;
public:
    cricket()
    {
        cout<<"K.L.RAHUL"<<endl;
        a=50000;
        b=1000;
        cout<<"total runs in all matches : "<<a<<endl;
        cout<<"Total wickets in all matches : "<<b<<endl;
    }
};
class run:public cricket
{
public:
     run()
    {
        cout<<"Average runs in all matches : "<<a/2<<endl;
         cout<<"Average wickets in all matches : "<<b/2<<endl;

    }
};
int main()
{
    run r;
}
