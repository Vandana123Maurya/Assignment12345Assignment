#include<stdio.h>
#include<conio.h>
void EvenNatural(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
EvenNatural(n);
getch();
}

void EvenNatural(int n){
    if(n>0){
           EvenNatural(n-1);
           printf("%d ",n+n);
    }
}
