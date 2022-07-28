#include<stdio.h>
#include<conio.h>
float SimpleIntrest(int,int,int);
int main(){
int p,r,t;
float si;
printf("Enter principle ammount,rate,time:");
scanf("%d %d %d",&p,&r,&t);
si=SimpleIntrest(p,r,t);
printf("%f",si);
getch();
}
float SimpleIntrest(int p,int r,int t){
     return (p*r*t)/100;
}
