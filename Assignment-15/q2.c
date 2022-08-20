#include<conio.h>
#include<stdio.h>
int smallestNumber(int[],int);
int main(){
int a[20],n,min;

printf("Enter size of array:");
scanf("%d",&n);

min=smallestNumber(a,n);
printf("smallest number is %d",min);
getch();
}
int smallestNumber(int a[],int n){
    int i,min;
    printf("Enter %d number:",n);
    for(i=0;i<=n-1;i++)
       scanf("%d",&a[i]);

    min=a[0];
        for(i=1;i<=n-1;i++){
             if(min>a[i])
                    min=a[i];
        }
        return min;
}
