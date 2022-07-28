#include<stdio.h>
#include<conio.h>
int fact(int);
int Combinator(int,int);

int main(){
int n,r,c;
printf("Enter value of n and r:");
scanf("%d %d",&n,&r);
c=Combinator(n,r);
printf("%d",c);
getch();
}

int Combinator(int n,int r){
  int c;
  c=fact(n)/(fact(r)*fact(n-r));
  return c;
}

int fact(int n){
int f=1,i;
for(i=1;i<=n;i++){
    f=f*i;
}
return f;
}
