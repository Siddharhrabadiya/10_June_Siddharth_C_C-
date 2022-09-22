#include<iostream>
using namespace std;
template<class T>
void swap_numbers(T& a,T& b)
{
    T t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int a,b;
    cout<<"Enter thee two values : ";
    cin>>a>>b;
    swap_numbers(a,b);
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
}
