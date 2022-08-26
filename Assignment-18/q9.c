#include<stdio.h>
#include<string.h>
int main(){
char s[30];
int i=0,start=0,end=0,f=0;
printf("Enter string");
fgets(s,30,stdin);
while(s[i]!='\0')
{
    while(s[i]!=32)
    {
        if(s[i]=='\0')
        {
            f=1;
            break;
        }
        end++;
        i++;
    }
    reverseWordWise(s,start,end-1);
    if(f==1)
        break;
    start=end++;
    i++;
}
reverseWordWise(s,0,i-1);
printf("%s ",s);
return 0;

}
void reverseWordWise(char s[],int i,int j){
    char temp;
    while(i<=j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
