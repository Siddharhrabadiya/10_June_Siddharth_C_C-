#include<iostream>
using namespace std;
int main()
{
    int *I;
    float *F;
    
    I=new int;
    F=new float;
    
    *I=20;
    *F=23.55;
    cout<<*I<<endl;
    cout<<*F<<endl;
    cout<<"\n";
    cout<<*I+*F<<endl;
    cout<<*F-*I<<endl;
    cout<<*F**I<<endl;
    
    delete I;
    delete F;
}
