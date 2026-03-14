#include <stdio.h>
int main()
{
    char arr[100];
    int i=0;
    int a=0;
    scanf("%s",arr);
    while(arr[i]!='\0'){
        if(arr[i]>='A'&& arr[i]<='Z'){
            a=1;
            break;
        }
        i++;
    }
    if(a==1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
