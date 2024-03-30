#include<stdio.h>

int main() {
   int t;
   int left,right,n,a,b;
   scanf("%d", &t);
   for (int i = 0 ; i < t; i++){
        scanf("%d", &n);
        scanf("%d %d", &a, &b);
        left = a;
        right = b;
        for (int i = 1; i < n; i++){
            scanf("%d %d", &a, &b);
            if (left < a){
                left = a;
            }
            if (right > b){
                right = b;
            }
        }
        if (left > right){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
        
   }
   return 0;
}
