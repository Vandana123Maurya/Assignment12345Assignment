#include<stdio.h>
#include<conio.h>
int main(){
int i,n,count=0;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
       if(n%i==0)
          count++;
}
if(count==2)
    printf("number is prime");
else
    printf("number is not prime");

getch();
}
