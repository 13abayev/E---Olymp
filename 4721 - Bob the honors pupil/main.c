#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int count = 0;
   while(a != 0){
    if(a % 10 == 5){
        count ++;
    }
    a /= 10;
   }
   printf("%d",count);
   return 0;
}
