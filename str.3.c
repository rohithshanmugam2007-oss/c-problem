#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int i;
    scanf("%s",&arr);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]=='@'){
            break;
        }
        printf("%c",arr[i]);
    }
    return 0;
}
