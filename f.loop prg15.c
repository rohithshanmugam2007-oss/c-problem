#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int count = 0;

    for (int i=2;i<=a;i++) {
    int p=1; 
    
    
    for (int j=2;j<i;j++) {  
    if (i%j==0) {
        
       p=0;
       break;
       
    }
    
    }
    if (p==1) {
     count++;
     }
    }

    printf("%d\n",count);
    return 0;
}