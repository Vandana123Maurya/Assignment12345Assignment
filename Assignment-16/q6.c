#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2],s1,s2;

printf("Enter %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n1;i++)
{    s2=0;
     s1=0;
    for(j=0;j<n2;j++){
            s2=s2+a[i][j];
            s1=s1+a[j][i];
    }
      printf("sum of %d column %d\n",i+1,s1);
      printf("sum of %d row %d\n\n",i+1,s2);
}
getch();
}
