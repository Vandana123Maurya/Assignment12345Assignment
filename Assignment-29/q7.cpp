#include<iostream>
using namespace std;

class Time
{
private:
    int h;
    int m;
public:
    Time()
    {

    }
    Time(int h,int m):h(h),m(m)
    {

    }
    int get()
    {
        return m;
    }

    void display()
    {
       cout<<"hour "<<h<<" min "<<m<<endl;
    }
};
class Minute
{
  private:
      int m;
  public:
    Minute()
    {

    }

    Minute(Time t)
    {
        m=t.get();
    }
    void display()
    {
      cout<<"Min: "<<m<<endl;
    }
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
   // m1.display();
    m1=(Minute)t1;
    //t1.display();
    m1.display();
    return 0;


}
