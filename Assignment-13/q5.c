#include<stdio.h>
#include<conio.h>

int SumOfDigit(int);
int main(){
int n,s;
printf("Enter number:");
scanf("%d",&n);
s=SumOfDigit(n);
printf("%d",s);
getch();
}

int SumOfDigit(int n){
 int s;
    if(n==0)
     return 0;

    s=n%10+SumOfDigit(n/10);
    return s;


}
