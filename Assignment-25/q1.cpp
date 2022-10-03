#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
 private:
 int real;
 int img;
 public:
 void setData(int r,int i)
 {
     real=r;
     img=i;
 }
 Complex printData(Complex c)
 {
     cout<<real<<" + "<<img<<"i"<<endl;
      cout<<c.real<<" + "<<c.img<<"i";
 }
};

int main()
{
    Complex c1,c2;
    c1.setData(3,6);
    c2.setData(6,5);
    c1.printData(c2);
    getch();
}
