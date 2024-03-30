#include <stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a, &b);
    long long res = a * a + b * b;
    printf("%lld",res);
}