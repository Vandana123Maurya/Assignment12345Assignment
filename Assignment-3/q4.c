#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",&n);
if(n&1)
    printf("number is odd");
else
    printf("Number is even");

getch();
}
