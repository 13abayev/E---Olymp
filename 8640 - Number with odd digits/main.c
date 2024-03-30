#include<stdio.h>

int main() {
   int a, b;
   scanf("%d %d", &a, &b);
   if (a % 2 == 0) a++;
   for(int i = a; i <= b; i += 2){
    int num = i;
    for(int j = 0; j < 4;j++){
        if(num % 2 == 0){
            break;
        }
        if(j == 3){
            printf("%d ",i);
        }
        num /= 10;
    }
   }
}
