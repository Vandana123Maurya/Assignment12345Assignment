#include<conio.h>
#include<stdio.h>
int main(){
int a1[20],a2[20],i,j,n;
printf("Enter size:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<=n-1;i++)
    scanf("%d",&a1[i]);

  for(i=0;i<=n-1;i++)
  {
    for(j=0;j<=n-1;j++)
        {
          if(j==i)
            a2[j]=a1[i];

        }
  }
  printf("First Array:");
      for(i=0;i<=n-1;i++)
         printf("%d ",a1[i]);


  printf("\nAnother array:");
      for(i=0;i<=n-1;i++)
         printf("%d ",a2[i]);

  getch();

}
