#include<stdio.h>
int main()
{
    int a,c,d=0;
    scanf("%d",&a);
    int count =0;
    for(int i=1;i<=a;i++){
        scanf("%d",&c);
        d=c+d;
        if(c>50){
            count++;
            
        }
        
    }
    printf("Heavy Rainfall:%d\n",d);
    printf("Heavy Rain Days:%d",count);

    return 0;
}
