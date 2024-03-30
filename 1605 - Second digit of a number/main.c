#include<stdio.h>

int main() {
   long long n;
   scanf("%lld", &n);
   if (n < 0){
    n *= -1;
   }
   while(n >= 100){
    n/=10;
   }
   printf("%lld",n%10);
}
