#include<stdio.h>
#include<conio.h>
int main(){
int n,p;
printf("Enter number:");
scanf("%d",&n);
p=nextPrime(n);
printf("%d",p);
getch();
}

int nextPrime(int n){
int i,count=0,j;
n=n+1;
for(i=n;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
            count++;
        }

        if(count==2){
            return i;
        }
    n++;

}
}
