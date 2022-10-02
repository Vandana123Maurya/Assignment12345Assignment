#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(){
int i,w1=-1,w2=-1,min=10;
char str[5][20]={"the","quick","brown","fox","quick"};
char word1[]="brown";
char word2[]="the";
for(i=0;i<5;i++)
{
    if(strcmp(str[i],word1)==0)
        w1=i;
    if(strcmp(str[i],word2)==0)
        w2=i;

    if(w1!=-1 && w2!=-1)
    {
     min=abs(w2-w1);

    }

}
printf("%d",min-1);
return 0;
}

