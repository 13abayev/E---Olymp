#include<stdio.h>

int main() {
   long long n;
   int maks;
   scanf("%lld", &n);
   while(n != 0){
    if (n % 10 > maks){
        maks = n % 10;
    }
    n /= 10;
   }
   printf("%d", maks);
}
