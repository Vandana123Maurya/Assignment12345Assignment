#include<conio.h>
#include<stdio.h>
int greatestNumber(int[],int);
int main(){
int a[20],n,max;

printf("Enter size of array:");
scanf("%d",&n);

max=greatestNumber(a,n);
printf("greatest number is %d",max);
getch();
}
int greatestNumber(int a[],int n){
    int i,max;
    printf("Enter %d number:",n);
    for(i=0;i<=n-1;i++)
       scanf("%d",&a[i]);

    max=a[0];
        for(i=1;i<=n-1;i++){
             if(max<a[i])
                    max=a[i];
        }
        return max;
}
