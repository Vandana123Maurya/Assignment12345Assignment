#include<iostream>
#include<conio.h>
using namespace std;
void PascalTriangle(int);
int fact(int);
int combi(int,int);
//------------------------------
int fact(int n){
 int i,f=1;
 for(i=1;i<=n;i++){
    f=f*i;
 }
 return f;
}
//------------------------------

int combi(int n,int r){
int c;
 c=fact(n)/(fact(r)*fact(n-r));
  return c;
}
//-----------------------------

int main(){
int n;
cout<<"Enter number:";
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        int k=0;
        if(j==0)
            while(k++<=(n/2-i+1))
               cout<<" ";

        cout<<" "<<combi(i,j);
    }
    cout<<endl;
}
getch();
}



