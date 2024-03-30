#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int count = 0;
   while(n != 0){
    if (n % 2 != 0){
        count++;
    }
    n /= 2;
   }
   printf("%d", count);
}
