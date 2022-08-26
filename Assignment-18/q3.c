#include<string.h>
#include<conio.h>
#include<stdio.h>
void compareString(char str1[],char str2[]);


int main(){
char str1[30],str2[30];
printf("Enter two string:\n");
gets(str1);
gets(str2);
compareString(str1,str2);

getch();
}
void compareString(char str1[],char str2[]){
int i,t;

for(i=0;str1[i];i++){
   if(str1[i]==str2[i])
              t=0;

   else{
        t=1;
        break;
       }
   }
   if(t==0)
     printf("string is same");
   else
     printf("string is not same");


}

