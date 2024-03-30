#include <stdio.h>

int main(){
    int a ,b ,c;
    scanf("%d %d %d",&a, &b, &c);

    if (a >= b && a <= c){
        printf("IN");
        return 0;
    }
    printf("OUT");
    return 0;
}