#include<stdio.h>
#include<conio.h>
int main(){
int n,rev=0,r;
printf("Enter number:");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}

printf("reverse number is %d",rev);
getch();
}
