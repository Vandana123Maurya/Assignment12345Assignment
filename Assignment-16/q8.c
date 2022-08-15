#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2];

printf("Enter %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++){
        if(j<i){
            a[i][j]=0;
        }
    }

}
printf("Upper triangular of matrix\n");
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");

}
getch();
}
