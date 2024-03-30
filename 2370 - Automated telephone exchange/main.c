#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int count = 0;
   for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
        if (i + j == a) count++;
    }
   }
   printf("%d",count);
}
