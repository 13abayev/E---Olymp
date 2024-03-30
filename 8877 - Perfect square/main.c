#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d", &a);
    double m = sqrt(a);
    int n = sqrt(a);
    if (m - n == 0){
        printf("%d",n);
        return 0;
    }
    printf("No");
}