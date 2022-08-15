#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2],index,s,m;

printf("Enter %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("maximum number of 1s\n");

  m=0;
for(i=0;i<n1;i++)
{
     s=0;
   for(j=0;j<n2;j++){

           if( a[i][j]==1)
                s=a[i][j]+s;

        }
      if(s>m){
           m=s;
           index=i;
      }
}
 printf("%d",index);


getch();
}
