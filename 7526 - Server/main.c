#include<stdio.h>

int main() {
   int n, time,t;
   int sum = 0;
   int count = 0;
   scanf("%d %d", &n, &time);
   for (int i = 0; i < n; i++){
    scanf("%d", &t);
    if (sum + t > time){
        break;
    }
    count++;
    sum += t;
   }
   printf("%d\n", count);
   return 0;
}
