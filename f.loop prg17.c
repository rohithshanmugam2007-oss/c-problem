#include<stdio.h>
int main()
{
    int a,c=1,b=0,j;
    scanf("%d",&a);
    int temp=a;
    for(int i=1;a!=0;a/=10){
        for(j=1;j<=a%10;j++){
            c=c*j;
        }
        b+=c;
        c=1;
    }
    if(b==temp){
        printf("Yes");
    }
    else
    printf("no");
    return 0;
}
