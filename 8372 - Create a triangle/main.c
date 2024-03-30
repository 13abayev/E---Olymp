#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if ((a + b > c && a - b < c) && (b + c > a && b - c < a) && (a + c > b && a - c < b)){
        printf("YES");
    }else{
        printf("NO");
    }
}