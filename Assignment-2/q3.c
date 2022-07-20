#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter two number:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("After swaping:a=%d and b=%d",a,b);
getch();
}
