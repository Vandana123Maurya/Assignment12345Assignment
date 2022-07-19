#include<stdio.h>
#include<conio.h>
int main(){
int i,n,s=0;
printf("Enter number:");
scanf("%d",&n);
for(i=2;i<=2*n;i=i+2){
    s=s+i;
}
printf("sum of first %d even natural number %d",n,s);
getch();
}
