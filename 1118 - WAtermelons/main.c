#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   if (n < 2){
    printf("Ooops!");
    return 0;
   }
   int min,max;
   int val;
   scanf("%d", &val);
   min = max = val;
   for(int i = 0; i < n; i++){
    scanf("%d", &val);
    if (val > max){
        max = val;
    }
    if (val < min){
        min = val;
    }
   }
   printf("%d %d",min,max);

}
