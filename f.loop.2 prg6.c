#include<stdio.h>
int main()
{
    int a,c,d=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&c);
        d=c+d;
        
    }
    printf("Total Collection:%d",d);

    return 0;
}
