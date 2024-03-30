#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)){
        printf("1");
        return 0;
    }
    printf("0", a/b, a % b);
    return 0;
}