#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,s,d,p,q,r;
    scanf("%d%d",&a,&b);
    s=a+b,d=a-b,p=a*b,q=a/b,r=a%b;
    printf("Sum: %d\n",s);
    printf("Difference: %d\n",d);
    printf("Product: %d\n",p);
    printf("Quotient: %d\n",q);
    printf("Remainder: %d\n",r);
    return 0;
}
