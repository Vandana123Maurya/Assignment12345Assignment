#include<stdio.h>
#include<conio.h>
int main(){
int a=-1,b=1,c,n,i;
printf("Enter terms:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
}
printf("%d",c);
getch();
}

