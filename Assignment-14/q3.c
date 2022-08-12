#include<stdio.h>
#include<conio.h>
int main(){
int a[10],i,s1=0,s2=0;
printf("Enter 10 number:");
for(i=0;i<=9;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0)
         s1=s1+a[i];
    else
         s2=s2+a[i];

}
printf("sum of all even number:%d\n",s1);
printf("sum of all odd number:%d",s2);
getch();
}
