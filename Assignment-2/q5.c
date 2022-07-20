#include<stdio.h>
#include<conio.h>
int main(){
int n=456,s=0,r;

r=n%10;
n=n/10;
s=s+r;

r=n%10;
n=n/10;
s=s+r;

r=n%10;
n=n/10;
s=s+r;

printf("%d",s);

getch();
}
