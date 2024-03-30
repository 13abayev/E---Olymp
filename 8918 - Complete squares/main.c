#include<stdio.h>

int main() {
   long long a = 0;
   scanf("%lld", &a);
   for (long long i = 1 ; i <= a ; i++){
    printf("%lld ", i*i);
   }
   return 0;
}
