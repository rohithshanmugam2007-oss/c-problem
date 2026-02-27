#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    int count=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        if(d<=a){
            count++;
        }
        if(d>a){
            break;
        }
        b--;
    }
      printf("people Entered:%d\n",count);
        if(d>a){
            printf("Overload Status:Yes");
        }    
        else
            printf("Overload Status:No");
       
    
  
    return 0;
}