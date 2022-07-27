#include<stdio.h>
#include<conio.h>
int checkPrime(int);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
if(checkPrime(n))
    printf("number is prime");
else
    printf("number is not prime");
getch();
}

int checkPrime(int n){
    int i,count=0;
    for(i=1;i<=n;i++){
     if(n%i==0)
            count++;
    }
    if(count==2)
        return 1;
    else
        return 0;

}
