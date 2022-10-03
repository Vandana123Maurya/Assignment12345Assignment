#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int);
float add(float,float);
float add(int,float);

int main()
{
  int a,b;
  cout<<"Enter two number : ";
  cin>>a>>b;
  cout<<"sum of two number "<< add(a,b)<<endl;
   getch();

  float x,y;
  cout<<"\nEnter two number : ";
  cin>>x>>y;
  cout<<"sum of two number "<< add(x,y)<<endl;
   getch();

   int n1;
  float n2;
  cout<<"\nEnter two number : ";
  cin>>n1>>n2;
  cout<<"sum of two number "<< add(n1,n2)<<endl;
   getch();

}
int add(int a,int b){
 return a+b;
}

float add(float x,float y){
 return x+y;
}

float add(int n1,float n2){
 return n1+n2;
}
