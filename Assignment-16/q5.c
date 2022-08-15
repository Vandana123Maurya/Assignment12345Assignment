#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2],s=0;

printf("Enter %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<n1;i++)
{
    for(j=n2-1-i;j>=0;j--){
            s=s+a[i][j];
             break;
    }
}

printf("sum of left diagonals %d",s);


getch();
}
