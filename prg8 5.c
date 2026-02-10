#include <stdio.h>

int main() {
    int a,b,i;
    
    
    scanf("%d%d",&a,&b);
    i=a;
    printf("%d",a/=b);
    printf("%d",i%=b);
    return 0;
}