#include<stdio.h>
#include<conio.h>
void Fibonacci(int);
int main(){
int t;
printf("Enter terms:");
scanf("%d",&t);
Fibonacci(t);
getch();
}
void Fibonacci(int n){
int a=-1,b=1,c,i;
for(i=1;i<=n;i++){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
}
