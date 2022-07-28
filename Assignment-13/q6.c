#include<stdio.h>
#include<conio.h>

int fact(int);
int main(){
int n,f;
printf("Enter number:");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
getch();
}

int fact(int n){
 int f;
    if(n==1)
    return 1;

  f=n*fact(n-1);
     return f;


}
