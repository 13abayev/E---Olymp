#include<stdio.h>

int main() {
   int t = 0;
   scanf("%d", &t);
   int a,b;
   for (int i = 0; i < t; i++){
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
   }
   return 0;
}
