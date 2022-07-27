#include<stdio.h>
#include<conio.h>
void SquareNumber(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
SquareNumber(n);
getch();
}
void SquareNumber(int n){
   printf("%d",n*n);
}

