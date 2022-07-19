#include<stdio.h>
#include<conio.h>
int main(){
int i,count,n;
printf("Enter number:");
scanf("%d",&n);
n=n+1;
while(1){
    count=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            count++;
    }
    if(count==2){
        printf("%d ",n);
        break;
    }
    n++;
}
getch();
}
