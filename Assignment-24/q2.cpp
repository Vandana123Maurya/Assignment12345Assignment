#include<iostream>
using namespace std;

int findHighestValue(int);
int main()
{
    int n,m;
    cout<<"Enter number:";
    cin>>n;
    m=findHighestValue(n);
    cout<<m;
}

  int findHighestValue(int n)
  {
    int m,r;
    m=n%10;
    while(n!=0)
    {
     n=n/10;
     r=n%10;
     if(m<r)
        m=r;
    }
    return m;
  }
