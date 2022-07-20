#include<stdio.h>
#include<conio.h>
int main(){
int n,d;
printf("Enter a number:");
scanf("%d",&n);

printf("Enter a digit:");
scanf("%d",&d);

n=n*10+d;
printf("%d",n);

getch();
}
