#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j,k=0;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        i<=n?k++:k--;
    for(j=1;j<=2*n-1;j++){
        if((j>=n+1-k && j<=n-1+k)&&(j>k && j<2*n-k)){
            printf("* ");
        }
        else
            printf("  ");
    }
    printf("\n");
}
getch();
}


