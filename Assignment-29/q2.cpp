#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex()
    {

    }
    setData(int r,int i)
    {
         cout<<"setData called "<<endl;
         real=r;
         imag=i;
    }
    operator int()
    {
        return real+imag;
    }

};
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=(int)c1;
    cout<<x;
    return 0;
}
