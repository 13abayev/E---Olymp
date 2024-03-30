#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    printf("%d", (n %10) % (n / 100));
}