#include <stdio.h>
int main()
{
  int i,j;
  int a;
  scanf("%d",&a);
  for(i=a;i>=1;i--){
    for(j=i;j<=a;j++){
      printf("%c ",'A'+j-1);
    }
    printf("\n");
  }
  return 0;
}
