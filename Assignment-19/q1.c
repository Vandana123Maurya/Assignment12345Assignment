#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
int i,count,j;
char str[10][30];
printf("Enter five string:\n");
for(i=0;i<=4;i++){
    gets(str[i]);
}

for(i=0;i<=4;i++){
    count=0;
       for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='i'||str[i][j]=='e'||str[i][j]=='a'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='I'||str[i][j]=='E'||str[i][j]=='A'||str[i][j]=='O'||str[i][j]=='U')
            count++;
       }
   printf("total vowel in %s:%d\n",str[i],count);
}
getch();
}
