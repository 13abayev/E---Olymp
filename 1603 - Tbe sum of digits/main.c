#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int sum = 0;
   if (a < 0){
    a *= -1;
   }
   while(a != 0){
        sum += a % 10;
        a /= 10;
   }
   printf("%d", sum);
   return 0;
}
