#include<stdio.h>
#include<conio.h>
int main(){
    int h,m;
    printf("Enter Month format in \"DD/MM/YYYY\":");
    scanf("%d:%d",&h,&m);
    printf("\"%d:%d\"Converted to\"%d Hour and %d Minute\"",h,m,h,m);

getch();
}
