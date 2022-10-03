#include<iostream>
#include<conio.h>
using namespace std;

class ReverseNumber
{
    int n;

public:
    void input()
    {
        cout<<"Enter number:";
        cin>>n;
    }
    void Reverse()
    {
        int rev=0,rem;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            rev=rev*10+rem;
        }
        cout<<"Reverse number is "<<rev;

    }

};

int main()
{
    ReverseNumber r1;
    r1.input();
    r1.Reverse();

    getch();
}
