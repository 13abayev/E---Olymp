#include <stdio.h>

int main(){
    long long a, b;
    scanf("%lld %lld",&a, &b);
    printf("%lld", ((b - a + 1) * (a + b)) / 2);
}