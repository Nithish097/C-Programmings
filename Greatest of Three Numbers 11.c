#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            if(a==b||b==c||c==a){
                printf("There is a tie for the greatest number");
            }
            else{
                printf("%d is the greatest",a);
            }
        }
        else{
            if(a==b||b==c||c==a){
                printf("There is a tie for the greatest number");
            }
            else{
                printf("%d is the greatest",c);
            }
        
        }
        
    }
    else if(b>c){
        if(a==b||b==c||c==a){
                printf("There is a tie for the greatest number");
        }
        else{
                printf("%d is the greatest",b);
        }
    }
    else{
        if(a==b||b==c||c==a){
                printf("There is a tie for the greatest number");
        }
        else{
                printf("%d is the greatest",c);
        }
    }
    return 0;
}
