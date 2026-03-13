include<stdio.h>
int main(){
    char s[50];
    int length=0;
    scanf("%s",s);
    while(s[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0;
    
}