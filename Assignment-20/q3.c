#include<stdio.h>
#include<conio.h>
void sort(int*ptr,int);
int main(){
int a[50],i,n;
printf("Enter size:");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
sort(a,n);
getch();
}
void sort(int *ptr,int n){
int i,t,j;
printf("%d\n",ptr[0]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(ptr[i]>ptr[j]){
            t=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=t;
        }
    }
}
for(i=0;i<n;i++)
    printf("%d ",ptr[i]);
}
