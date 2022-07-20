
main(){
    int i,j,n;
       printf("Enter number:");
       scanf("%d",&n);

       for(i=1;i<=n;i++)
       {
          for(j=1;j<=n*6-1;j++)
            {
               if((j>=n+1-i && j<=2*n-1+i) ||(j>=4*n+1-i && j<=5*n-1+i))
                {

                   printf("* ");
                }
               else
                 printf("  ");
            }
           printf("\n");
       }

        for(i=1;i<=n*n;i++)
            {
               for(j=1;j<=6*n-1;j++)
               {
                    if(j>=i && j<=n*6-i )
                    {

                      printf("* ");
                    }
                    else
                      printf("  ");
                }
               printf("\n");
            }
     getch();
}



