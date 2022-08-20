#include<stdio.h>
#include<conio.h>
int main(){
int i,j,a[10],f[100]={0},n;

printf("Enter size:");
scanf("%d",&n);
printf("Enter number:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);


for(i=0;i<n;i++){
     f[a[i]]++;
}
for(i=0;i<100;i++)
{
    if(f[i]!=0)
        printf("%d : %d\n",i,f[i]);

}

}





