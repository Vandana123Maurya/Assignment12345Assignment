#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i,j,t;
char str[30];
printf("Enter string:");
gets(str);


for(i=0;str[i];i++){
        for(j=i+1;str[j];j++){
            if(str[i]>str[j]){
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }
}

printf("sort string:%s",str);


getch();
}
