#include<stdio.h>
#include<conio.h>
int main(){
int i,n,s=0;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=s+i*i*i;
}
printf("sum of cubes of first %d natural number %d",n,s);
getch();
}
