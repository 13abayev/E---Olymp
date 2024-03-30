#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    float a[n];
    float maks = 0;
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
        if (fabs(a[i]) > maks){
            maks = fabs(a[i]);
        }
    }
    printf("%.2f",maks);
    return 0;
}
