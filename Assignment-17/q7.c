#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i,c1,c2,c3;
char str[30];
printf("Enter string:");
fgets(str,30,stdin);
c1=c2=c3=0;

for(i=0;str[i];i++){
   if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z')
    c1++;
   else if(str[i]>='0'&& str[i]<='9')
    c2++;
   else
    c3++;
}
printf("Alphabet:%d\n",c1);
printf("digits:%d\n",c2);
printf("special character:%d",c3);
getch();
}
