#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter three digit number:");
scanf("%d",&n);
n=n>>1;
printf("%d",n);
getch();
}
