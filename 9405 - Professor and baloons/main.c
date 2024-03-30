#include <stdio.h>

int main(){
    long long n, a, b;
    scanf("%lld %lld %lld",&n, &a, &b);
    long long blue = a + b - n;
    long long red = b - blue;
    long long yellow = a - blue;
    printf("%lld %lld %lld",blue, red, yellow);
}