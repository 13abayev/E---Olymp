#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   if (a < 0){
    a *= -1;
   }
   if(a / 100 == 0 && a/10 > 0){
    printf("Ok");
    return 0;
   }
   printf("No");
   return 0;
}
