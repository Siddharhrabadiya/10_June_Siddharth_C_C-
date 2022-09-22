#include<iostream>
using namespace std;
class matrix
{
private:
    int x[5],y[5],z[5],i;
public:
    matrix()
    {
        x[5]=0,y[5]=0,z[5]=0,i=1;
    }
    void getvalue()
    {
        cout<<"Enter the first matrix : ";
        for(int i=1;i<=5;i++)
        {
            cin>>x[i];
        }
        cout<<"Enter the second matrix : ";
        for(i=1;i<=5;i++)
        {
        cin>>y[i];
        }
        for(i=1;i<=5;i++)
        {
            z[i]=x[i]+y[i];
        }
    
    }
    void displayvalue()
    {
        cout<<"Two 1D matrix addition is : ";
        for(i=1;i<=5;i++)
        {
        cout<<" "<<z[i]<<endl;
        }
    }
    matrix operator+(matrix);
};
matrix matrix :: operator + (matrix m)
{
    matrix m1;
    int a=x[i]+m.x[i];
    int b=y[i]+m.y[i];
    int c=z[i]+m.z[i];
    m1.x[i]=a;
    m1.y[i]=b;
    m1.z[i]=c;
    return m1;
}
int main()
{
    matrix ma;
    ma.getvalue();
    ma.displayvalue();
    
}
