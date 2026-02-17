#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
       c=c+b;
    }
    printf("Total Units:%d",c);
    
    return 0;
}
