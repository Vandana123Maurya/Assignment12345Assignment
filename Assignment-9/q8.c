#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
switch(n>0){
case 0:
    n=-n;
    printf("%d",n);
    break;
case 1:
    n=-n;
     printf("%d",n);
    break;

}
getch();
}
