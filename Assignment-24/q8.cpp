#include<iostream>
using namespace std;
float Area(int);
int Area(int ,int);
float Area(float ,float);
int main()
{
int r;
cout<<"Enter Radius:";
cin>>r;
cout<<"Area of circle"<<" "<<Area(r)<<endl;
int x,y;
cout<<"Enter length and breadth:";
cin>>x>>y;
cout<<"Area of Rectangle"<<" "<<Area(x,y)<<endl;
float h,b;
cout<<"Enter base and height:";
cin>>b>>h;
cout<<"Area of Triangle "<<Area(b,h)<<endl;

}
float Area(int r){
 return 3.14*r*r;
}

int Area(int x,int y){
 return x*y;
}
float Area(float b,float h){
 return (0.5*b*h);
}

