#include<stdio.h>

int main() {
   int num;
   scanf("%d", &num);
   int nums[28] = {0};
   for(int i = 100; i <= 999; i++){
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        nums[a + b + c] += 1;
   }
   printf("%d\n", nums[num]);
   for(int i = 100; i <= 999; i++){
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        if (a + b + c == num){
            printf("%d\n", i);
        }
   }
}
