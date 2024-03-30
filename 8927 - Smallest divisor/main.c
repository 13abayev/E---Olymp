#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   for (int i = 2; i * i <= a; i++){
    if (a % i == 0){
        printf("%d",i);
        return 0;
    }
   }
   printf("%d",a);
   return 0;
}
