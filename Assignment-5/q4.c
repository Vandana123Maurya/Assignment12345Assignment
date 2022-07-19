#include<stdio.h>
#include<conio.h>
int main(){
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=2*n;i=i+2){
    printf("%d ",i);
}
getch();
}
