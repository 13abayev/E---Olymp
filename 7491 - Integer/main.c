#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    printf("%ld", (a * 7 + b - 2) * (a - c + 5));
}