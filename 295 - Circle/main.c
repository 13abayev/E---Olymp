#include<stdio.h>

void counter(int r){
    int count = 0;
    for (int i = r; i >= -r; i--){
        for (int j = r; j >= -r; j--){
            if (i * i + j * j <= r*r){
                count ++;
            }
        }
    }
    printf("%d\n", count);
}

int main() {
    for (int i = 0; i <= 30; i++){
        printf("%d --- ",i);
        counter(i);
    }
}
