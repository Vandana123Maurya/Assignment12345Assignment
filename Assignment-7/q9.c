#include<stdio.h>
#include<conio.h>
int main(){
int n,arm=0,r,t;
printf("Enter number:");
scanf("%d",&n);
 t=n;
while(n>0){
    r=n%10;
    n=n/10;
    arm=arm+r*r*r;
}
if(t==arm)
    printf("number is Armstrong");
else
    printf("number is not Armstrong");


getch();
}
