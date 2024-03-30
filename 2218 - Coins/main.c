#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int one = 0;
   int reverse = 0;
   int coin;
   for (int i = 0 ; i < a; i++){
    scanf("%d", &coin);
    if (coin == 1){
        one++;
    }
    else{
        reverse++;
    }
   }
   if (reverse < one){
    printf("%d",reverse);
   }
   else{
    printf("%d",one);
   }
   return 0;
}