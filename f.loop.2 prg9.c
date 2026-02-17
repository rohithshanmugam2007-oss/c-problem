#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        c=c+b;
        if(b<40){
            count++;
        }
    
    }
    c=c/a;
    printf("Average Score=%d\n",c);
    printf("Failed Subjects:%d",count);
    return 0;
}