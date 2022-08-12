#include<stdio.h>
#include<conio.h>
int reverse(int);
int s=0;
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);

printf("%d",reverse(n));
getch();
}

int reverse(int n){
int r;
if(n>0){
      r=n%10;
      s=s*10+r;
      reverse(n/10);
   }
   else
      return s;

}
