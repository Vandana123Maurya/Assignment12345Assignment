#include<stdio.h>
#include<conio.h>
int main(){
int a[10],i,s=0;
float avg;
printf("Enter 10 number:");
for(i=0;i<=9;i++){
    scanf("%d",&a[i]);
    s=s+a[i];

}
avg=s/10;
printf("%f",avg);
getch();
}
