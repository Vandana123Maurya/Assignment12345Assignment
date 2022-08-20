#include<conio.h>
#include<stdio.h>
 void rotatearray(int a[],int);
int main(){
int a[20],n;

printf("Enter size of array:");
scanf("%d",&n);
rotatearray(a,n);
getch();
}


void rotatearray(int a[],int n){

int i,j,p,first;

printf("Enter position of array:");
scanf("%d",&p);
printf("Enter number:");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=p-1;i++){
        first=a[0];
         for(j=0;j<n-1;j++){
            a[j]=a[j+1];
         }
         a[j]=first;

    }
      for(i=0;i<=n-1;i++)
        printf("%d ",a[i]);


}
