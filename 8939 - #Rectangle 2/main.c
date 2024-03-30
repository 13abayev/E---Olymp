#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   for (int i = 0; i < 4; i++){
    for (int j = 0; j < a; j++){
        printf("#");
    }
    printf("\n");
   }
   return 0;
}
