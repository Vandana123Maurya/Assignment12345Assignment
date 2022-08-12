#include<stdio.h>
#include<conio.h>
int main(){
int a[10],i,j,m,n;
printf("Enter number for size:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
printf("reverse array:");
for(i=n-1;i>=0;i--){
       printf("%d ",a[i]);
}


getch();
}
