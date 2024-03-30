#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if (n / 100 > n % 10){
        printf("%d", n/100);
    }
    else if (n / 100 < n % 10){
        printf("%d", n % 10);
    }
    else{
        printf("=");
    }
}