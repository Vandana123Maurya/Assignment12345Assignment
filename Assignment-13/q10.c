#include<stdio.h>
#include<conio.h>

int POwerOfNumber(int,int);
int main(){
int a,b,c;
printf("Enter number:");
scanf("%d%d",&a,&b);
c= POwerOfNumber(a,b);
printf("%d",c);
getch();
}
int  POwerOfNumber(int n1,int n2){

int n=n1;
if(n2==0)
    return 1;

n1=n1*POwerOfNumber(n1,n2-1);;
return n1;
}
