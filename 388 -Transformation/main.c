#include<stdio.h>

int main() {
    int count = 0;
    int n;
    scanf("%d", &n);
    while(n != 1){
        if(n % 2 != 0){
            n += 1;
            count++;
        }
        if(n % 2 == 0){
            n /= 2;
            count ++;
        }
    }
    printf("%d",count);
}
