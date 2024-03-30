#include<stdio.h>

int main() {
   long long n;
   int maks = 0;
   int count = 0;
   scanf("%lld", &n);
   while(n != 0){
    if (n % 10 > maks){
        maks = n % 10;
        count = 1;
    }
    else if (n % 10 == maks){
        count ++;
    }
    n /= 10;
   }
   printf("%d", count);
}
