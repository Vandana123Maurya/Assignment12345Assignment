#include<stdio.h>
#include<conio.h>

void fibonacci(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
fibonacci(n);
getch();
}

void fibonacci(int n)
{
static int a=-1,b=1,c;
if(n>0)
{
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
  fibonacci(n-1);

}
}

