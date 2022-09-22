#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("File.txt",ios::out);
    int a,b;
    a=50;
    b=29;
    f<<"addition is : "<<a+b;
    f<<"multiplication : "<<a*b;
    f<<"subtraction : "<<a-b;
    f.close();
    f.open("file.txt",ios::in);
    while(!f.eof())
    {
        string str;
        f>>str;
        cout<<str<<endl;
    }
    f.close();
    
    
}
