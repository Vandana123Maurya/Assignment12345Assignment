#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
    private:
      int n;
      static int a;

public:

    void SquareNumber(int x)
    {
        a++;
        n=x;
        cout<<"Square number is "<<n*n<<endl;
    }
    void countcall()
    {
        cout<<a<<" times call SquareNumber() function call";
    }

};
int Square::a=0;
int main()
{
    Square s1,s2,s3;
    s1.SquareNumber(3);
    s2.SquareNumber(4);
    s2.SquareNumber(5);
    s1.countcall();
    getch();
}
