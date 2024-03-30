#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   a++;
   while(a % 7 != 0){
     a++;
   }
   printf("%d", a);
   return 0;
}
