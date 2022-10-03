#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    void input()
    {
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    void AreaOfReatangle()
    {
        cout<<"Area of rectangle is "<<length*width;

    }

};

int main()
{
    Rectangle r1;
    r1.input();
    r1.AreaOfReatangle();

    getch();
}
