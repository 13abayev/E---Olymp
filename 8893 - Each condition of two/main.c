#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   if (a < 0){
    a *= -1;
   }
   if (a >= 10 && a <= 99){
    if(a % 6 == 0){
        printf("YES");
        return 0;
    }
   }
   printf("NO");
   return 0;
}
