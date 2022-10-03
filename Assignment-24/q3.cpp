#include<iostream>
using namespace std;
 void power(int,int);
int main()
{
  int x,y;
  cout<<"Enter value of x and y:";
  cin>>x>>y;
  power(x,y);

}
void power(int x,int y)
{
    int t=1,i;
    for(i=1;i<=y;i++)
        t=t*x;
    printf("%d",t);
}
