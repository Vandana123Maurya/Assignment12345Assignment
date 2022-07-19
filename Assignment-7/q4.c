#include<stdio.h>
#include<conio.h>
int main(){
int n1,n2,lcm;
printf("Enter two number:");
scanf("%d %d",&n1,&n2);
if(n1%2==0 && n2%2==0){
    if(n1>n2){
        lcm=n1;
        printf("%d",lcm);
    }else{
        lcm=n2;
        printf("%d",lcm);
    }
}else{
 lcm=n1*n2;
 printf("%d",lcm);
}
getch();
}

