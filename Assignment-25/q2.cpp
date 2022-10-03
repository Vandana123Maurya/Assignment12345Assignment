#include<iostream>
using namespace std;

class Time
{
private:

  int hour;
  int minute;
  int second;
public:
    void setTime(int h,int m,int s)
    {
       hour=h;
       minute=m;
       second=s;
    }
    void showTime()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }


};

int main()
{
    Time t1,t2;
    t1.setTime(2,56,34);
    t2.setTime(3,46,20);
    t1.showTime();
    t2.showTime();


}
