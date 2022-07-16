#include<stdio.h>
#include<conio.h>
int main(){
    int d,m,y;
    printf("Enter Date format in \"DD/MM/YYYY\":");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("\"Day-DD,Month-MM,Year-YYYY\"(Day-%d,month-%d,year-%d)",d,m,y);

getch();
}
