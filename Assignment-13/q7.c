#include<stdio.h>
#include<conio.h>

int findLcm(int,int);
int main(){
int n1,n2,l;
printf("Enter number:");
scanf("%d%d",&n1,&n2);
l=findLcm(n1,n2);
printf("%d",l);
getch();
}

int findLcm(int n1,int n2){
 int n3;
    if(n2==0)
       return n1;
     n3=n2;
     n2=n1%n2;
     n1=n3;
     findLcm(n1,n2);
}
