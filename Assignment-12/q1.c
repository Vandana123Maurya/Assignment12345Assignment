#include<stdio.h>
#include<conio.h>
void printNatural(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
printNatural(n);
getch();
}
void printNatural(int n){
    if(n>0){
        printNatural(n-1);
        printf("%d ",n);
    }
}
