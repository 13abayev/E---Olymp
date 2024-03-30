#include<stdio.h>

int main() {
   double a = 0;
   scanf("%lf", &a);
   int b = a;
   if (a - b != 0){
    printf("No");
    return 0;
   }
   printf("Ok");
   return 0;
}
