#include<stdio.h>
#include<conio.h>
void uniqeElement(int a[],int);
int main(){
int i,j,a[10],n;
printf("Enter size:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
uniqeElement(a,n);
getch();
}

void uniqeElement(int a[],int n){
    int i,j,f[100]={0};
for(i=0;i<n;i++){
     f[a[i]]++;
}
printf("Unique element\n");
for(i=0;i<100;i++){
    if(f[i]==1)
        printf("%d\n",i);
}
}
