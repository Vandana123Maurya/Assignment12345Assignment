#include<stdio.h>
#include<conio.h>
int main(){
int n=2,c=0,r=0;
r=n&1;
c++;
if(r==1){
    printf("%d",c);

}
n=n>>1;

r=n&1;
c++;
if(r==1){
    printf("%d",c);

}
n=n>>1;

getch();
}
