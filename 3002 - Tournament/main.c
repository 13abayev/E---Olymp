#include<stdio.h>

int main() {
   int t ;
   scanf("%d", &t);
   int sum1 = 0;
   int sum2 = 0;
   int one, two;
   for (int i = 0; i < t; i++){
        scanf("%d %d", &one, &two);
        if (one > two){
            sum1 ++;
        }
        else if (one < two){
            sum2 ++;
        }
   }
   if (sum1 > sum2){
    printf("1");
   }
   else if (sum1 < sum2){
    printf("2");
   }
   else{
    printf("0");
   }
   return 0;
}
