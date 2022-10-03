#include<stdio.h>
int main()
{
    int *p,n;
    printf("Enter size:");
    scanf("%d",&n);

    p=(int*)calloc(n,sizeof(int));
    if(p==NULL){
        printf("Memory allocation fail");
        return 0;
    }

}
