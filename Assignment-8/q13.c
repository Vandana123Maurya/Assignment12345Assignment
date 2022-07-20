#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j,k;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        k='A';
    for(j=1;j<=2*n-1;j++)
    {
       if(j<=n+1-i || j>=n-1+i)
         {
            if(j>=n+1)
            {
                k--;
                printf("%c ",k);
            }

            else
            {

                k++;
                printf("%c ",k);
            }

        }

        else
        {
            j>=n+1?k--:k++;
            printf("  ");
        }
    }
    printf("\n");
}
getch();
}
