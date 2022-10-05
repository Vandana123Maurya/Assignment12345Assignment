#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag=0;
public:
    Complex()
    {

    }
    Complex(int r,int i):real(r),imag(i)
    {
         cout<<"parameter constructor "<<endl;
    }

    void display()
     {
         cout<<"real "<<real<<" imag "<<imag<<endl;
     }
};
int main()
{
      int x=5,y=4;
      Complex c1(x,y);
      c1.display();

    return 0;
}
