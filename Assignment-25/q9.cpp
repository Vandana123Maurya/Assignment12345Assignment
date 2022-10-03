#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
private:
    int radius;

public:
    void input()
    {
        cout<<"Enter Radius:";
        cin>>radius;
    }
    void AreaOfCircle()
    {
        cout<<"Area of cicle is "<<3.14*radius*radius;

    }

};

int main()
{
    Circle c1;
    c1.input();
    c1.AreaOfCircle();

    getch();
}
