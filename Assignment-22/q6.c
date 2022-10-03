int main()
{
    int *ptr;
    int n,i,max;
    printf("Enter size:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&ptr[i]);
    }
    max=ptr[0];
    for(i=0;i<n;i++)
    {
       if(max<ptr[i])
        max=ptr[i];

    }
    printf("%d is largest",max);
    free(ptr);
    getch();
}
