#include<stdio.h>
#include<conio.h>
int swap(int*,int*);
int main(){
int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("swap number a=%d and b=%d",a,b);
getch();
}
int swap(int *p,int *q){
int t;
t=*p;
*p=*q;
*q=t;
}
