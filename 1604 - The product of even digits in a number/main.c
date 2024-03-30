#include<stdio.h>

int main() {
   long long n, product = 1;
   scanf("%lld", &n);
   if (n == 0){
    printf("0");
    return 0;
   }
   if (n < 0){
    n *= -1;
   }
   while(n)
    {
    if (n % 2 == 0) product *= (n % 10);
    n /= 10;
    }
   if(product == 1){
    printf("-1");
    return 0;
   }
   printf("%lld", product);

}
