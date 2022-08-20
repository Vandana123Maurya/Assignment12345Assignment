#include<conio.h>
#include<stdio.h>

int firstDuplicateValue(int a[],int);
int main(){
int a[10],n;
printf("Enter size:");
scanf("%d",&n);
printf("%d",firstDuplicateValue(a,n));
getch();
}


int firstDuplicateValue(int a[],int n){
    int i,j,t=0;
printf("Enter %d number:",n);
for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
for(i=0;i<=n-1;i++)
{
   if(a[i]==a[i+1])
          return a[i];
    else
          return ;
}


}
