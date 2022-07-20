#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j,k;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
        if(i==n||j==n||j==n+1-i)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}
getch();
}
