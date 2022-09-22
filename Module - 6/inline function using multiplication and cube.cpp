#include<iostream>
using namespace std;
inline int mul(int a,int b)
{
    return a*b;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int x,y;
    cout<<"enter the values : ";
    cin>>x>>y;
    cout<<endl<<"multiplication is :"<<mul(x,y)<<endl;
    cout<<endl<<"cube is :"<<cube(x)<<endl;
}
