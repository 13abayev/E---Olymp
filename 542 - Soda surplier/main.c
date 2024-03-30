#include<stdio.h>

int main() {
   int e, f, c;
   scanf("%d %d %d", &e, &f, &c);
   int result = 0;
   int total_bottles = e + f;
   while(total_bottles >= c){
        int gained_soda = total_bottles / c;
        result += gained_soda;
        total_bottles = total_bottles % c;
        total_bottles += gained_soda;
   }
   printf("%d", result);
}
