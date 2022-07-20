#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("After swaping:a=%d and b=%d",a,b);
getch();
}
