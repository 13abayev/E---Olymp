#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int num;
   for (int i = 0; i < a; i++){
    scanf("%d", &num);
    if (num % 2 != 0){
        printf("%d ",num);
    }
   }
   return 0;
}
