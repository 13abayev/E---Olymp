#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   long long res = 1;
   for (int i = 1; i <= a; i++){
    res *= i;
   }
   printf("%lld",res);
   return 0;
}
