main(){
int i,j,n,count=0;
printf("enter number");
scanf("%d",&n);
  for(i=1;i<=n;i++){
    count=0;
      for(j=1;j<=i;j++){
          if(i%j==0){
           count++;
        }
        }


    if(count==2){
        while(n%i==0){
           printf("%d ",i);
           n=n/i;
        }

    }
}

getch();
}
