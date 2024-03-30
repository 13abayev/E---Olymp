#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   float sum = 0;
   float num;
   for (int i = 0; i < a; i ++){
    scanf("%f", &num);
    sum += num;
   }
   printf("%.1f", sum);
   return 0;
}
