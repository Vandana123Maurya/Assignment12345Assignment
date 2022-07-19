#include<stdio.h>
#include<conio.h>
int main(){
int arm,r,i,t,t1;

 for(i=1;i<=1000;i++){
        arm=0;
        t=i;
        t1=i;
        while(t!=0){
           r=t%10;
           t=t/10;
           arm=arm+r*r*r;
         }
          if(t1==arm)
            printf("%d ",arm);

 }





getch();
}
