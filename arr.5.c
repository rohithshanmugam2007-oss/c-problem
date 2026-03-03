#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r,sum=0;
    for(int i=0;i<a-1;i++){
        scanf("%d",&r);
        sum=sum+r;
    }
    int e=a*(a+1)/2;
    int m=e-sum;
    printf("%d",m);
    return 0;
}