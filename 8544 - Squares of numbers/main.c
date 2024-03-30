#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int i = 1;
   while( i * i <= a){
        printf("%d ", i*i);
        i ++;
   }
   return 0;
}
