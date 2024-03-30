#include<stdio.h>

int main() {
   long long n;
   scanf("%lld", &n);
   if (n < 0){
    n *= -1;
   }
   while(n >= 10){
    n/=10;
   }
   printf("%lld",n);
}
