#include<stdio.h>
#include<conio.h>
int main(){
int a[50],i,n;
printf("Enter size:");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
sum(a,n);
getch();
}
void sum(int *p,int n){
int i,j,s=0;
for(i=0;i<n;i++){
    s=s+p[i];

}
printf("%d",s);
}
