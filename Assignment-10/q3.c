#include<stdio.h>
#include<conio.h>
int CheckEvenOdd(int);

int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
 if(CheckEvenOdd(n))
    printf("Even");
 else
    printf("odd");
getch();
}

int CheckEvenOdd(int n){
int f=1,i;
if(n%2==0)
        return 1;
else
    return 0;


}
