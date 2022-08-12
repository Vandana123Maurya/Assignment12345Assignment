#include<stdio.h>
#include<conio.h>
int main(){
int a[10],i,j,t;
printf("Enter 10 number:");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

for(i=0;i<=9;i++){
      for(j=i+1;j<=9;j++)
        {
          if(a[i]>a[j])
            {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
            }

        }
}
printf("Sort array:");

for(i=0;i<=9;i++){
printf("%d ",a[i]);
}
getch();
}








