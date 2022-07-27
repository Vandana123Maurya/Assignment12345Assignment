#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
switch(n%2==0){
case 1:
    printf("%d",n+1);
    break;

case 0:
    printf("%d",n);
    break;
}
getch();

}
