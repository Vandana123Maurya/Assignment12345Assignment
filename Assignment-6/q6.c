#include<stdio.h>
#include<conio.h>
int main(){
int i,n,f=1;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    f=f*i;
}
printf("Factorial of %d is %d",n,f);
getch();
}
