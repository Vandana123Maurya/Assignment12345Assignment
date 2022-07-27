#include<stdio.h>
#include<conio.h>
void firstNPrime(int);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
firstNPrime(n);
getch();
}

void firstNPrime(int n){
int i=1,j,count,c=1;
while(c<=n){
    count=0;
    for(j=1;j<=i;j++)
       {
         if(i%j==0)
            count++;
       }

     if(count==2)
        {
            printf("%d ",i);
             c++;
        }
   i++;

 }

}




