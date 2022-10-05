#include<iostream>
using namespace std;
//class Dollar;
class Dollar
{
private:
    float d;
public:
    Dollar()
    {
       cout<<"Default constructor called for dollar"<<endl;
    }
    Dollar(float x)
    {
        cout<<"parameter constructor for dollar"<<endl;
        d=x;
    }
    void display()
    {
        cout<<"display function call for dollar "<<d<<endl;

    }
   /* get()
    {
        cout<<"get() function called"<<endl;
       return d*100;
    }
     */
    operator float()
    {
        cout<<"float() called for dollar"<<endl;
        return d;
    }

};

class Rupee
{
private:
    float r;
public:
    Rupee()
    {
       cout<<"Default constructor called"<<endl;
    }
    Rupee(float x)
    {
        cout<<"parameter constructor"<<endl;
        r=x;
    }
   /* Rupee(Doller d)
    {
        cout<<"Rupee (dollar) called";
        d.get();
    }*/
    operator Dollar()
    {
        cout<<"operator Dollar called"<<endl;
        return r/100;
    }
    void display()
    {
       cout<<"display function call for dollar "<<r<<endl;
    }

    operator float()
    {
        cout<<"float() called"<<endl;
        return r;
    }

};



int main()
{
    float x=6;
    Rupee r1=x;
    r1.display();
    x=r1;

    float y=3;
    Dollar d1=y;
    d1.display();
    y=d1;

    r1=(Rupee)d1;

    d1=(Dollar)r1;
    d1.display();



}
