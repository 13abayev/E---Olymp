#include<stdio.h>

int main() {
   long long n;
   scanf("%lld", &n);
   if (n == 0){
    printf("0");
   }
   while(n != 0){
    printf("%d", n%10);
    n/=10;
   }
}
