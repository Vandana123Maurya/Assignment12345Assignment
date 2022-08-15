#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2],t1,c1=0,c2=0;

printf("Enter %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++){
            t1=a[i][j];
           if(t1==0)
                c1++;
            else
                c2++;
        }


}
if(c1>c2)
    printf("matrix is sparse matrix\n");
 else
      printf("matrix is not sparse matrix\n");

getch();
}
