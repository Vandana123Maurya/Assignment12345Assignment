#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j,k;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        k=0;
    for(j=1;j<=2*n-1;j++)
    {
        if(j>=i && j<=2*n-i)
        {
              if(j>n)
              {
                 k--;
                 printf("%d ",k);
              }
              else
              {
                k++;
                printf("%d ",k);

              }
        }
        else
            printf("  ");
    }
    printf("\n");
}
getch();
}
