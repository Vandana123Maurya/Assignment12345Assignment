#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=2*n;j++){
        if(j<=n+1-i || j>=n+i)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}
getch();
}
