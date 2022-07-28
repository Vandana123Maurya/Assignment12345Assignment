#include<stdio.h>
#include<conio.h>
int Check(int,int);

int main(){
int n,d,r;
printf("Enter number:");
scanf("%d",&n);
printf("Enter digit:");
scanf("%d",&d);
if(Check(n,d))
   printf("%d is available",d);
else
     printf("%d is not available",d);
getch();
}

int Check(int n,int d){
    int r;
while(n>0)
{
    r=n%10;
    n=n/10;
    if(r==d)
        return 1;
    else
        return 0;
}
}
