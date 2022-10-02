#include<stdio.h>
#include<conio.h>
int main(){
int a[50],i,n;
printf("Enter size:");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
reverse(a,n);
getch();
}
void reverse(int *p,int n){
int i;
for(i=n-1;i>=0;i--){
 printf("%d ",p[i]);
}

}
