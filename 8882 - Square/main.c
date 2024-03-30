#include<stdio.h>

int main() {
   long long a,b,c,d;
   scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
   if(a == b && b == c && c == d){
    printf("%lld", a*a);
    return 0;
   }
   printf("No");
}
