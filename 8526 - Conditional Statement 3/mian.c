#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    if (x < -4){
        y = x + 5;
    }
    else if (x > 7){
        y = x*x*x + 2*x;
    }
    else {
        y = x*x - 3 * x;
    }
    printf("%d",y);
}