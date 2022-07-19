#include<stdio.h>
#include<conio.h>
int main(){
int i,t,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
        t=n*i;
        printf("%d*%d = %d ",n,i,t);
        printf("\n");
}
getch();
}
