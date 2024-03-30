#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int left = 0; int right = 1; int line = 1;
   for(int i = 0; i < n; i++){
        if(line == 1){
            for(int j = 0; j < n; j++){
                printf("*");
            }
            printf("\n");
            line = 0;
        }
        else if(right == 1){
            for(int j = 0; j < n - 1; j++){
                printf(" ");
            }
            printf("*\n");
            line = 1;
            left = 1;
            right = 0;
        }
        else if(left == 1){
            printf("*");
            for(int j = 0; j < n - 1; j++){
                printf(" ");
            }
            printf("\n");
            line = 1;
            left = 0;
            right = 1;
        }
    }
}
