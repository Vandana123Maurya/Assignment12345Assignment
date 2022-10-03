#include<stdio.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    printf("%d\n",p);
    p=NULL;
    printf("%d",p);
}
