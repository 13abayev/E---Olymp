#include <stdio.h>

int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a, &b, &c);
    long long res = a - c + b;
    printf("%lld",res);
}