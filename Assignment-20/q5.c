#include<stdio.h>
#include<conio.h>
int main(){
int i,a,b;
printf("Enter two:");
scanf("%d %d",&a,&b);
maximumNumber(&a,&b);
getch();
}
void maximumNumber(int *p,int *q){

if(*p>*q)
    printf("maximum number is %d",*p);
if(*p<*q)
       printf("maximum number is %d",*q);



}
