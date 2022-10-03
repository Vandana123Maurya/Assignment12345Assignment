#include<iostream>
using namespace std;
int swap(int&,int&);
int main()
{
int a,b;
cout<<"Enter two number:";
cin>>a>>b;
cout<<"before swaping"<<" "<<a<<" "<<b<<endl;
swap(a,b);
cout<<"After swaping"<<" "<<a<<" "<<b;
}

int swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
