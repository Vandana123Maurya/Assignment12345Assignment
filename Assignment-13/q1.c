#include<stdio.h>
#include<conio.h>

int SumNaturalNumber(int);
int main(){
int n,s;
printf("Enter number:");
scanf("%d",&n);
s=SumNaturalNumber(n);
printf("%d",s);
getch();
}

int SumNaturalNumber(int n){
   int s;
    if(n==1)
        return 1;

   s=n+SumNaturalNumber(n-1);
     return s;
}
