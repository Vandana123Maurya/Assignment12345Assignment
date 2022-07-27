#include<stdio.h>
#include<conio.h>
int fact(int);
void SumSeries(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
SumSeries(n);
getch();
}

void SumSeries(int n){
    int s=0,i;
for(i=1;i<=n;i++){
    s=s+(fact(i)/i);

}
printf("%d",s);
}

int fact(int n){
int f=1,i;
for(i=1;i<=n;i++){
    f=f*i;
}
return f;
}
