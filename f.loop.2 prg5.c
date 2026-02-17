#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d\n%d",&a,&b);
    for(int i=1;i<=b;i++){
        scanf("%d",&c);
        d=c+d;
        
    }
    printf("Remaining Battery:%d",a-d);

    return 0;
}
