#include<stdio.h>
#include<conio.h>
int findHCF(int,int);

int main(){
int n1,n2,h;
printf("Enter number:");
scanf("%d%d",&n1,&n2);
h=findHCF(n1,n2);
printf("%d",h);
getch();
}

int findHCF(int n1,int n2){
int lcm,hcfj;
if(n1%2==0 && n2%2==0)
   lcm=n1>n2?n1:n2;
else
   lcm=n1*n2;

hcf=n1*n2/lcm;
return hcf;

}
