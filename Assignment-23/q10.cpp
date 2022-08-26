#include<iostream>
using namespace std;

int main()
{
    int a[10],s=0,i;
    printf("Enter 10 number\n");
    for(i=0;i<10;i++){
        cin>>a[i];
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
