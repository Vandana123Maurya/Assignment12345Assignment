#include<stdio.h>
#include<conio.h>
int findLCM(int,int);

int main(){
int n1,n2,l;
printf("Enter number:");
scanf("%d%d",&n1,&n2);
l=findLCM(n1,n2);
printf("%d",l);
getch();
}

int findLCM(int n1,int n2){
int lcm;
if(n1%2==0 && n2%2==0){
    if(n1>n2){
        lcm=n1;
        return lcm;
    }else{
        lcm=n2;
        return lcm;
    }
}else{
 lcm=n1*n2;
 return lcm;
}

}
