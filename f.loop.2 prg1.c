#include<stdio.h>
int main()
{
    int c=0,a,e=0;
   int b;
scanf("%d",&a);
for(int i=0;i<a;i++){
    scanf("%d",&b);
    c+=b;
    if(b>1000){
        e++;
    }

}
printf("Total expenses:%d\n",c);
printf("Over spended Days:%d",e);
return 0;
}