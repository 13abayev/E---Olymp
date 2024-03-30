#include <stdio.h>

int main(){
    long long h,w,l,k;
    scanf("%lld %lld %lld %lld",&h,&w,&l,&k);
    long volume = h * w * l;
    if (volume % k == 0) {
        printf("%d", volume/k);
    }
    else {
        printf("%d", volume/k+1);
    }
}