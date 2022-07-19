#include<stdio.h>
#include<conio.h>
int main(){
int a=-1,b=1,c,n;
printf("Enter number:");
scanf("%d",&n);
c=a+b;
while(c<n){
    a=b;
    b=c;
    c=a+b;
}
if(c==n){
    printf("Number is Fibonnaci");
}
else{
    printf("Number is not Fibonnaci");
}
getch();
}

