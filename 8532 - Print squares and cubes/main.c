#include<stdio.h>

int main() {
   long long a, b;
   long long res ;
   scanf("%lld %lld", &a, &b);
   for (long long i = a; i <= b; i++){
    res = i*i;
    printf("%lld ", res);
   }
   printf("\n");
   for (long long i = b; i >= a; i--){
    res = i*i*i;
    printf("%lld ", res);
   }
   return 0;
}