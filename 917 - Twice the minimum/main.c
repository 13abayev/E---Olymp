#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float a[n];
    float mini = 101;
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
        if (a[i] < mini){
            mini = a[i];
        }
    }
    printf("%.2f",2 * mini);
    return 0;
}
