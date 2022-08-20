#include<conio.h>
#include<stdio.h>
void sortNumber(int[],int);
int main(){
int a[20],n,i;

printf("Enter size of array:");
scanf("%d",&n);
sortNumber(a,n);

getch();
}
void sortNumber(int a[],int n){
    int i,t,j;
    printf("Enter %d number:",n);
    for(i=0;i<=n-1;i++)
       scanf("%d",&a[i]);

        for(i=0;i<=n-1;i++){
           for(j=i+1;j<=n-1;j++){
            if(a[i]>a[j])
            {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
            }
           }
        }
        printf("sort array");
        for(i=0;i<=n-1;i++)
            printf("%d ",a[i]);

}
