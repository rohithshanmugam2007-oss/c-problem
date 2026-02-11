##include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("positive number");
    }
    else if(n<0){
    printf("Negative number");
    }
    else{
    printf("zero");
    }
    return 0;
}