#include <stdio.h>

int main(){
    long n, m;
    scanf("%ld %ld",&n, &m);
    long long ans = (n - 1) * m * 3;
    printf("%lld\n",ans);
}