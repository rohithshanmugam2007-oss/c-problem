#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int valid=1; 
    for (int i=0,j=a-1;i<j;i++,j--) {
        if (arr[i]!=arr[j]){
            valid=0; 
            break;
        }
    }
    if (valid)
        printf("Yes\n");
    else
        printf("No");
    return 0;
}