#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   float sum = 0;
   int count = 0;
   float num;
   for (int i = 0; i < a; i ++){
    scanf("%f", &num);
    if (num > 0){
        sum += num;
        count ++;
    }
   }
   if (sum == 0){
    printf("Not Found");
    return 0;
   }
   printf("%.2f", sum/count);
   return 0;
}
