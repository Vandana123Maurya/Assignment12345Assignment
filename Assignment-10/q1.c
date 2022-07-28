#include<stdio.h>
#include<conio.h>
float AreaOfCircle(int);
int main(){
int r;
float A;
printf("Enter radius:");
scanf("%d",&r);
A=AreaOfCircle(r);
printf("%f",A);
getch();
}
float AreaOfCircle(int r){
     return 3.14*r*r;
}
