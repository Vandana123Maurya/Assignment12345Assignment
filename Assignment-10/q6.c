#include<stdio.h>
#include<conio.h>
int fact(int);

int main(){
int n,f;
printf("Enter number:");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
getch();
}

int fact(int n){
int f=1,i;
for(i=1;i<=n;i++){
    f=f*i;
}
return f;
}
