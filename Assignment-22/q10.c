#include<stdio.h>
int main()
{
    int *ptr,n,max,min,i;
    printf("Enter size:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    max=ptr[0];
    min=ptr[0];
    for(i=0;i<n;i++)
    {
        if(max<ptr[i])
            max=ptr[i];
        if(min>ptr[i])
            min=ptr[i];
    }
    printf("%d is maximum\n",max);
    printf("%d is minimum",min);
}
