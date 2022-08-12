#include<stdio.h>
#include<conio.h>
int main(){
int i,j,a[10],n,t;
printf("Enter size:");
scanf("%d",&n);
printf("Enter number:");
for(i=0;i<=n-1;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++){
    for(j=i+1;j<=n-1;j++){
        if(a[i]<a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
     }
}
for(i=0;i<=n-1;i++){
    if(i==1)
        printf("Second greatest number is %d",a[i]);
}
getch();
}
