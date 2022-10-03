#include<iostream>
#include<conio.h>
using namespace std;

class Factorial
{
    int n;
    int f=1;
public:
    void input()
    {
        cout<<"Enter number:";
        cin>>n;
    }
    void fact()
    {
        int i;
        for(i=1;i<=n;i++)
            f=f*i;

    }
    Factorial printFact()
    {
        cout<<"factorial of "<<n<<" is "<<f<<endl;
         //cout<<"factorial of "<<f1.n<<" is "<<f1.f;
    }
};

int main()
{
    Factorial f1,f2;
    f1.input();
    f1.fact();
    f1.printFact();

    f2.input();
    f2.fact();
    f2.printFact();

    getch();
}
