#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
   int a=0,b=1,c=0;
   for(int i=2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
   }
   if(n==1){
    printf("%d",n);

   }
   
   printf("%d",c);


    return 0;
}
