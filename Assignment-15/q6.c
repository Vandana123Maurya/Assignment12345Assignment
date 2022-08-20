#include<stdio.h>
#include<conio.h>
void reverseArray(int a[],int);
int main(){
int a[10],i,n;
printf("Enter number for size:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
reverseArray(a,n);
 getch();
}
void reverseArray(int a[],int n){
    int i,j,m;
for(i=0,j=n-1;i<=j;i++,j--){
         m=a[i];
        a[i]=a[j];
        a[j]=m;
}
printf("reverse array:");
for(i=0;i<=n-1;i++)
    printf("%d ",a[i]);


}
