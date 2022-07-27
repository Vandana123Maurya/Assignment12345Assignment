#include<stdio.h>
#include<conio.h>
void printPrime(int,int);
int main(){
int n1,n2;
printf("Enter two number:");
scanf("%d%d",&n1,&n2);
printPrime(n1,n2);
getch();
}

void printPrime(int x,int y){
int i,j,c;
for(i=x;i<=y;i++){
        c=0;
    for(j=1;j<=i;j++)
    if(i%j==0){
        c++;
    }
if(c==2)
    printf("%d ",i);

}
}
