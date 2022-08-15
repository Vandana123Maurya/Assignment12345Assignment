#include<conio.h>
#include<stdio.h>
int main(){
    int n1,n2;
printf("Enter two size number:");
scanf("%d%d",&n1,&n2);
int i,j,a[n1][n2],b[n1][n2],c[n1][n2];
printf("Enter first %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter second  %dx%d matrix\n",n1,n2);
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
           c[i][j]=a[i][j]+b[i][j];
         }
}
printf("Add two matrix\n");
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
getch();
}
