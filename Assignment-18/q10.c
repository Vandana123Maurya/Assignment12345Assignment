#include<conio.h>
#include<stdio.h>
#include<string.h>
void checkPalin(char str[]);
int main(){
char str[30];
printf("Enter string:");
gets(str);
checkPalin(str);
getch();
}
void checkPalin(char str[]){
int i,j;
int f[150]={0};

for(i=0;str[i];i++){
   f[str[i]]++;

}
printf("Repeat character:\n");
for(i=0;i<150;i++){
     if(f[i]>=2)
    printf("%c ",i);
}


}
