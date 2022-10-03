#include<iostream>
using namespace std;

int primeNumber(int);
int main(){
int n;
cout<<"Enter number";
cin>>n;
if(primeNumber(n))
    cout<<"number is prime";
else
    cout<<"number is not prime";
return 0;
}

int primeNumber(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++){
    if(n%i==0)
        c++;
  }
  if(c==2)
    return 1;
  else
    return 0;
}
