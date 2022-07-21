#include<stdio.h>
#include<conio.h>
int main(){
    int s1,s2,s3,s4,s5;
    printf("Enter five subject marks:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    if(s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
        printf("pass");
    else
        printf("Fail");
    getch();
}
