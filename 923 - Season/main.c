#include<stdio.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   if(a <= 2 || a == 12){
    printf("Winter");
    return 0;
   }
   if( a <= 5){
    printf("Spring");
    return 0;
   }
   if( a <= 8){
    printf("Summer");
    return 0;
   }
   if( a <= 11){
    printf("Autumn");
   }
   return 0;
}
