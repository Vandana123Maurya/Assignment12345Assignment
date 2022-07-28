#include<stdio.h>
#include<conio.h>

int CountDigit(int);
int main(){
int n,c;
printf("Enter number:");
scanf("%d",&n);
c=CountDigit(n);
printf("%d",c);
getch();
}
int CountDigit(int n){
static int c=0;
if(n>0){
     c++;
     CountDigit(n/10);
}
return c;


}
