#include<stdio.h>
#include<conio.h>
void oddNatural(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
oddNatural(n);
getch();
}

void oddNatural(int n){
    if(n>0){

          oddNatural(n-1);
           printf("%d ",n+n-1);
    }
}





