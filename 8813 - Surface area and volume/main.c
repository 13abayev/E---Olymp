#include <stdio.h>

int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a, &b, &c);
    long long surface = 2 * (a*b + b*c + a*c);
    long long volume = a * b * c;
    printf("%lld %lld", surface, volume);
}