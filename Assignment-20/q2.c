#include<stdio.h>
#include<conio.h>
char swap(char**,char**);
int main(){
    char *str1[10],*str2[10];
    printf("Enter two string:");
    fgets(str1,10,stdin);
    fgets(str2,10,stdin);
    printf("before swaping string \n%s %s\n",str1,str2);
    swap(&str1,&str2);
    printf("After swaping strings\n%s %s",str1,str2);
getch();
}
char swap(char **p1,char **p2){
char *temp;
temp=*p1;
*p1=*p2;
*p2=temp;

}
