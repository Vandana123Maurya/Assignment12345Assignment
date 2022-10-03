int main()
{
    int *ptr;
    int n,i,sum=0,avg;
    printf("Enter size:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+ptr[i];

    }

    printf("average %d",sum/n);
    free(ptr);
    getch();
}
