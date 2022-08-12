#include<conio.h>
#include<stdio.h>
void DecimalToBinary(int);
int main(){
int n,r;
printf("Enter number:");
scanf("%d",&n);
DecimalToBinary(n);

getch();
}
void DecimalToBinary(int n){
 if(n==0)
    return;
    DecimalToBinary(n/8);
    printf("%d",n%8);
}

