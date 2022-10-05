#include<iostream>
using namespace std;

class Rupee
{
   private:
       int r;
   public:
    Rupee()
    {
        cout<<"Default Constructor"<<endl;
    }
    Rupee(int x):r(x)
    {
        cout<<"Parameter Constructor"<<endl;
    }
    display()
    {
        cout<<"Display called "<<r<<endl;
    }
    operator int()
    {
        cout<<"int() function called"<<endl;
        return r;
    }
};
int main()
{
    Rupee r=10;
    r.display();
    int x=r;
    cout<<x;
    return 0;

}


