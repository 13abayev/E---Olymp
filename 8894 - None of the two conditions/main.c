#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   if (a % 2 == 0 && a > 0){
    printf("NO");
    return 0;
   }
   if (a %2 != 0 && a < 0){
    printf("NO");
    return 0;
   }
   printf("YES");
   return 0;
}
