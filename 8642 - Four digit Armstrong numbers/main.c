#include<stdio.h>

int main() {
   int a ,b;
   scanf("%d %d", &a, &b);
   for (int i = a; i <= b; i++){
        int f = i / 1000;
        int s = i / 100 % 10;
        int t = i / 10 % 10;
        int l = i % 10;
        if (f*f*f*f + s*s*s*s + t*t*t*t + l*l*l*l == i){
            printf("%d ",i);
        }
    }
   return 0;
}
