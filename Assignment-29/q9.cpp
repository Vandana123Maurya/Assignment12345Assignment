#include<iostream>
using namespace std;

class Dollar
{
   private:
       int d;
   public:
    Dollar()
    {
        cout<<"Default Constructor"<<endl;
    }
    Dollar(int x):d(x)
    {
        cout<<"Parameter Constructor"<<endl;
    }
    display()
    {
        cout<<"Display called "<<d<<endl;
    }

};
int main()
{
    int x=50;
    Dollar d;
    d=x;
    d.display();

    return 0;

}


