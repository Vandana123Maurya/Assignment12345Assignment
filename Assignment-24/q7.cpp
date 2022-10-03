#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int,int=0);
int main()
{
  int a,b,c;
  cout<<"Enter two number : ";
  cin>>a>>b;
  cout<<"sum of two number "<< add(a,b)<<endl;
   getch();
  cout<<"Enter three number : ";
  cin>>a>>b>>c;
  cout<<"sum of three number "<< add(a,b,c);
}
int add(int a,int b,int c){
 return a+b+c;
}
