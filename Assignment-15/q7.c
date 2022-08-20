#include<stdio.h>
#include<conio.h>
int duplicate(int a[],int);
int main(){
int a[10],i,t,n;
printf("Enter size:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);

t=printf("%d",duplicate(a,n));
getch();
}

int duplicate(int a[],int n){

int j,count=1,i;
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n-1;j++)
     {
        if(a[i]==a[j])
          count++;

     }
}
return count;
}
