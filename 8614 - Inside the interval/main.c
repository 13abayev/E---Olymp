#include <stdio.h>

int main(){
    int a ,b ,c;
    scanf("%d %d %d",&a, &b, &c);

    if (a >= b && a <= c){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}