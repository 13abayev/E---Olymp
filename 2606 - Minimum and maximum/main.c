#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b){
        printf("%d %d", b, a);
        return 0;
    }
    printf("%d %d", a,b);
    return 0;
}