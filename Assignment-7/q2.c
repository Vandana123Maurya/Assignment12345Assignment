#include<stdio.h>
#include<conio.h>
int main(){
int a=-1,b=1,c,n,i;
printf("Enter terms:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
getch();
}
//n=10  0 1 1 2 3 5 8 13 21 34
