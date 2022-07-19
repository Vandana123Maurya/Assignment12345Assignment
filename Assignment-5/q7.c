#include<stdio.h>
#include<conio.h>
int main(){
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(i=2;i<=2*n;i=i+2){
    printf("%d ",2*n+2-i);
}
getch();
}
