#include<stdio.h>
#include<conio.h>
int fact(int);
int Permutation(int,int);

int main(){
int n,r,p;
printf("Enter value of n and r:");
scanf("%d %d",&n,&r);
p=Permutation(n,r);
printf("%d",p);
getch();
}

int Permutation(int n,int r){

  return fact(n)/fact(n-r);

}

int fact(int n){
int f=1,i;
for(i=1;i<=n;i++){
    f=f*i;
}
return f;
}
