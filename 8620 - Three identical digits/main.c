#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 1000;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    if (a == b && a == c && a != d ){
        printf("YES");
        return 0;
    }
    else if (a != b && a == c && a == d){
        printf("YES");
        return 0;
    }
    else if (a == b && a != c && a == d){
        printf("YES");
        return 0;
    }
    else if (b == c && b != d && a != b){
        printf("YES");
        return 0;
    }
    printf("NO");
}