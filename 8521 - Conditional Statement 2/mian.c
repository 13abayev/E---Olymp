#include <stdio.h>

int main(){
    long long x,y;
    scanf("%lld",&x);
    if (x < 10){
        y = x*x - 2*x + 4;
    }
    else{
        y = x*x*x + 5*x;
    }
    printf("%lld",y);
}