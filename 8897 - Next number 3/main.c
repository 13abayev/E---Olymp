#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   a++;
   while(a % 10 != 0){
    a++;
   }
   printf("%d",a);
   return 0;
}
