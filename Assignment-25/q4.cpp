#include<iostream>
#include<conio.h>
using namespace std;

class LargestNumber
{
  private:
    int a;
    int b;
    int c;
  public:
    void input()
    {
        cout<<"Enter Three Numbers:";
        cin>>a>>b>>c;
    }
    void findLarg()
    {
       if(a>b)
       {
           if(a>c)
            cout<<a<<" is largest number";
           else
             cout<<c<<" is largest number";
       }
       else
       {
            if(b>c)
            cout<<b<<" is largest number";
           else
             cout<<c<<" is largest number";
       }

    }

};

int main()
{
    LargestNumber l1,l2;
    l1.input();
    l1.findLarg();



    getch();
}
