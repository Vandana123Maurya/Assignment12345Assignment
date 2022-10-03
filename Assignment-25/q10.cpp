#include<iostream>
#include<conio.h>
using namespace std;

class Area
{
private:
    float radius;
    float s;
    float l;
    float b;

public:
     void input1()
    {
        cout<<"Enter Radius:";
        cin>>radius;
    }
    void input2()
    {
        cout<<"Enter number:";
        cin>>s;
    }
     void input3()
    {
        cout<<"Enter length and breath:";
        cin>>l>>b;
    }
    void AreaOfCircle()
    {
        cout<<"Area of cicle is "<<3.14*radius*radius<<endl;

    }
     void AreaOfSquare()
    {
        cout<<"Area of square is "<<s*s<<endl;

    }

     void AreaOfRectangle()
    {
        cout<<"Area of rectangle is "<<l*b<<endl;
    }


};

int main()
{
    Area a1,a2,a3;
    a1.input1();
    a1.AreaOfCircle();
    cout<<endl;
    a2.input2();
    a2.AreaOfSquare();
    cout<<endl;
    a3.input3();
    a3.AreaOfRectangle();


    getch();
}
