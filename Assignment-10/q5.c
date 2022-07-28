#include<stdio.h>
#include<conio.h>
void printOdd(int);

int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
printOdd(n);
getch();
}

void printOdd(int n){
int f=1,i;
for(i=1;i<=n;i++){
    printf("%d ",i+i-1);
}

}
