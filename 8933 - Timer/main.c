#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   for (int i = a; i >= 0; i--){
    printf("%d sek\n", i);
   }
   return 0;
}
