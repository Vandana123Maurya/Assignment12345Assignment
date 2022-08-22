#include<stdio.h>
#include<conio.h>
int main()
{
int i=0;
int f[150]={0};
char str[30];

printf("Enter string:");
gets(str);


while(str[i]!='\0'){
     f[str[i++]]++;

}

for(i=0;i<150;i++)
   {
        if(f[i]!=0){
            printf("%c : %d\n",i,f[i]);

        }
   }
   return 0;

}






