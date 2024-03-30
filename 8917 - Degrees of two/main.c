#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int pow = 2;
   while(pow < a){
    printf("%d ",pow);
    pow *= 2;
   }
}
