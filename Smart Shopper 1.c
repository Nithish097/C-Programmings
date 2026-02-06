#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c1,q1,c2,q2,c3,q3,b;
    float cost_i,cost_f;
    scanf("%d%d",&c1,&q1);
    scanf("%d%d",&c2,&q2);
    scanf("%d%d",&c3,&q3);
    scanf("%d",&b);
    cost_i = (c1*q1)+(c2*q2)+(c3*q3);
    cost_f = cost_i+(cost_i*0.1);
    printf("Total (Before Tax): %.2f\n",cost_i);
    printf("Total (After Tax): %.2f\n",cost_f);
    if(cost_f<=b){
        printf("Within Budget");
    }
    else{
        printf("Over Budget");
    }

    return 0;
}
