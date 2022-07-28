#include<stdio.h>
#include<conio.h>

int SumOddNumber(int);
int main(){
int n,s;
printf("Enter number:");
scanf("%d",&n);
s=SumOddNumber(n);
printf("%d",s);
getch();
}

int SumOddNumber(int n){
   int s;
    if(n==0)
        return 0;
    s=n+n+SumOddNumber(n-1);
     return s;


}
