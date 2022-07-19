#include<stdio.h>
#include<conio.h>
int main(){
int n1,n2,lcm;
printf("Enter number:");
scanf("%d %d",&n1,&n2);
lcm=n1>n2?n1:n2;
while(lcm){
    if(lcm%n1==0 && lcm%n2==0)
    {
        printf("%d",lcm);
        break;
    }
    lcm++;


}

getch();
}
