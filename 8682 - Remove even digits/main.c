#include<stdio.h>

int main() {
   long long n;
   scanf("%lld", &n);
   long long new_n = 0;
   long long pow = 1;
   while(n != 0){
        if ((n % 10) % 2 != 0){
            new_n += (n % 10 * pow);
            pow *= 10;
        }
        n /= 10;
   }
   printf("%lld",new_n);

}
