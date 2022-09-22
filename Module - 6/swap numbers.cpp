#include<iostream>
using namespace std;
class number
{
 int a, b, c;
 public:
 void input()
{
 cout<<"Enter Two Numbers :";
 cin>>a>>b;
}
friend void swap(number &t);
void display()
{
 cout<<"After Swap a is :" << a<<endl;
 cout<<"After Swap b is :" << b<<endl;
}
};
void swap(number &n)
{
    n.c = n.a;
    n.a = n.b;
    n.b = n.c;
}
int main()
{
    number n1;
    n1.input();
    swap(n1);
    n1.display();
    return 0;
}
