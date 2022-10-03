#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
     printf("%d\n",*ptr);
     free(ptr);
     printf("%d",*ptr);

    return 0;
}


