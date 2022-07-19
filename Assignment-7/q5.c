#include<stdio.h>
#include<conio.h>
int main(){
int n1,n2,lcm,hcf;
printf("Enter two number:");
scanf("%d %d",&n1,&n2);
if(n1%2==0 && n2%2==0)
    lcm=n1>n2?n1:n2;
else
 lcm=n1*n2;

hcf=n1*n2/lcm;
if(hcf==1)
    printf("number is co-prime");
else
    printf("number is not co-prime");


getch();
}
