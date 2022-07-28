#include<stdio.h>
#include<conio.h>
void printNatural(int);

int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
printNatural(n);
getch();
}

void printNatural(int n){
int f=1,i;
for(i=1;i<=n;i++){
    printf("%d ",i);
}

}
