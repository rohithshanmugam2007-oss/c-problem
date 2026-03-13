#include<stdio.h>
int main(){
    int a,b,m=0;
    int count=0,c=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<a;i++){
         m=0,count=0;
         for(int j=0;j<b;j++){
           m=arr[0+i][0];
           if(m<=arr[i][j]){
               count++;
           }
         }
           if(count==b){
               c++;
           }
           
     }
    printf("%d",c);
    
    return 0;
}