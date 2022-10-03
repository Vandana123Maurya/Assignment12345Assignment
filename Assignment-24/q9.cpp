#include<iostream>
using namespace std;
int maximumNumber(int,int);
float maximumNumber(float,float);

int main()
{
int a,b;
cout<<"Enter two number:";
cin>>a>>b;
cout<<"maximum number"<<" "<<maximumNumber(a,b)<<endl;
float x,y;
cout<<"Enter two number:";
cin>>x>>y;
cout<<"maximum number"<<" "<<maximumNumber(x,y)<<endl;


}
int maximumNumber(int a,int b)
{
 if(a>b)
    return a;
 if(a<b)
    return b;
}

float maximumNumber(float x,float y)
{
 if(x>y)
    return x;
 if(x<y)
    return y;
}


