#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c,D;
printf("Enter three number :");
scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
    printf("Real and distinct");
else if(D<0)
     printf("Imaginary");
else
     printf("Real and Equal");

getch();
}
