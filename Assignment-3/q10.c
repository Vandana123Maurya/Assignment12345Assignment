#include<stdio.h>
#include<conio.h>
int main(){
int cp,sp,p,l;
printf("Enter Cost Price:");
scanf("%d",&cp);
printf("Enter Selling Price:");
scanf("%d",&sp);
p=sp-cp;
l=cp-sp;
if(cp==sp)
    printf("no any profit and loss");
else if(sp>cp)
    printf("Profit=%d",p);
else
    printf("Loss=%d",l);

getch();
}


