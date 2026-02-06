#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int numberOfCuts(int n) {
    if(n%2==0){
        n=n/2;
        return n;
    }
    else if(n==1){
        return 0;
    }
    else{
        return n;
    }
}
int main() {
    int a;
    scanf("%d",&a);
    numberOfCuts(a);

    return 0;
}
