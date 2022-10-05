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
    Time(int d)
    {
        h=d/3600;
        m=d%3600;
    }
    void display()
    {
        cout<<h<<" "<<m;


    }
};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes:";
    cin>>duration;
    Time t1=duration;
    t1.display();
    return 0;
}
