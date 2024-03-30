#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("EVEN");
        return 0;
    }
    printf("ODD");
    return 0;
}