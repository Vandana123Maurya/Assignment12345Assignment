#include<iostream>
using namespace std;
void Fibonnaci(int);
int main(){
int n;
cout<<"Enter number:";
cin>>n;
Fibonnaci(n);

}

void Fibonnaci(int n)
{
   int a=-1,b=1,c;
    c=a+b;
    while(c<n)
        {
           a=b;
           b=c;
           c=a+b;
        }
     if(c==n)
        cout<<"Number is in Fibonnaci";
     else
        cout<<"Number is not in Fibonnaci";


}


