#include<iostream>
using namespace std;

class Invent1
{
    float x;
    float y;
public:
    Invent1()
    {
      cout<<"Default Constructor for Invent1"<<endl;
    }
    Invent1(float a,float b)
    {
        cout<<"parameter constructor for Invent1"<<endl;
        x=a;
        y=b;
    }
   float get()
   {
       return x;
   }
    operator float()
    {
        cout<<"float operator called"<<endl;
        return x+y;
    }


};
class Invent2
{
    float z;
  public:
      Invent2()
      {
       cout<<"Default Constructor for Invent2"<<endl;
      }
    Invent2(Invent1 I)
    {
        z= I.get();
    }
    void display()
    {
        cout<<"display "<<z<<endl;
    }
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=(float)s1;
    cout<<tv<<endl;
    d1=(Invent2)s1;
    d1.display();
    return 0;
}
