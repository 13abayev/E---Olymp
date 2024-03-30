#include<stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int k = 0;
    while(2 * k + 1 != a){
        for(int j = 0; j < a; j++){
            if(k == j || a - k - 1 == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        k++;
    }
    while(k >= 0){
        for(int j = 0; j < a; j++){
            if(k == j || a - k - 1 == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}
