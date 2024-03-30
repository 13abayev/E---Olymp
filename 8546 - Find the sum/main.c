#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    double i = 1;
    double sum = 0;
    while(i <= n){
        sum += 1/( i * (i + 1));
        i++;
    }
    printf("%.6lf",sum);
}
