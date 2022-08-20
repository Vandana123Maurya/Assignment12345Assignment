#include<conio.h>
#include<stdio.h>
void mergeArray(int a[],int b[],int m[],int,int,int);

int main(){
int a[10],b[10],m[20],n1,n2,i;
printf("Enter first and second arrays of the same size:");
scanf("%d %d",&n1,&n2);

printf("Enter  %d number 1st array:",n1);
for(i=0;i<=n1-1;i++)
    scanf("%d",&a[i]);

printf("Enter %d number 2nd array :",n2);
for(i=0;i<=n2-1;i++)
    scanf("%d",&b[i]);

mergeArray(a,b,m,n1,n2,n1+n2);

getch();
}


void mergeArray(int a[],int b[],int m[],int n1,int n2,int c){
int i,j,k,t;
for(k=0;k<=c-1;k++)
 {
       if(k<=c/2-1)
       {
           for(i=0;i<=n1-1;i++)
            {
                  if(k==i)
                     m[k]=a[i];
            }
       }
       else
        {
            for(j=0;j<=n2-1;j++)
             {
                  if(k==n2+j)
                     m[k]=b[j];
             }
        }
}
for(i=0;i<=c-1;i++)
  {
        for(j=i+1;j<=c-1;j++){
            if(m[i]<m[j]){
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
  }
    for(i=0;i<=c-1;i++)
         printf("%d ",m[i]);
}


