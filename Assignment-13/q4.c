#include<stdio.h>
#include<conio.h>

int SumSquareNumber(int);
int main(){
int n,s;
printf("Enter number:");
scanf("%d",&n);
s=SumSquareNumber(n);
printf("%d",s);
getch();
}

int SumSquareNumber(int n){
   int s;
    if(n==1)
        return 1;

   s=n*n+SumSquareNumber(n-1);
     return s;


}
