#include<stdio.h>
#include<conio.h>
void PascalTriangle(int);
int fact(int);
int combi(int,int);
//------------------------------
int fact(int n){
 int i,f=1;
 for(i=1;i<=n;i++){
    f=f*i;
 }
 return f;
}
//------------------------------

int combi(int n,int r){
int c;
 c=fact(n)/(fact(r)*fact(n-r));
  return c;
}
//-----------------------------

int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
PascalTriangle(n);
getch();
}
void PascalTriangle(int n){
int i,k,j,r;
for(i=1;i<=n;i++){
        k=1;r=0;
    for(j=1;j<=2*n-1;j++){
        if(j>=n+1-i && j<=n-1+i)
            if(i%2!=0)
                {
                     if(j%2!=0){
                        printf("%d ",combi(i-1,r));
                        r++;
                     }
                     else
                        printf("  ");

                 }
             else
                {
                     if(j%2==0){
                       printf("%d ",combi(i-1,r));
                       r++;
                     }
                     else
                       printf("  ");

                }
        else
            printf("  ");
    }
    printf("\n");
}

}

