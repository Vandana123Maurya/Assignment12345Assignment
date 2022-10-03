int main()
{
    int *ptr;
    int n,i,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
      scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+ptr[i];

    }

    printf("Sum of all element %d",sum);
    free(ptr);
    getch();
}
