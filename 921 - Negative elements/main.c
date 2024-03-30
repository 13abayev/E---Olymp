#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   float sum = 0;
   int count = 0;
   float num;
   for (int i = 0; i < a; i ++){
    scanf("%f", &num);
    if (num < 0){
        sum += num;
        count ++;
    }
   }
   printf("%d %.2f", count, sum);
   return 0;
}
