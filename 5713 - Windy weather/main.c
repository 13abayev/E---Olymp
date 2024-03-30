#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int val;
    scanf("%d", &val);
    int min,max;
    min = max = val;
    for (int i = 1; i < n; i++){
        scanf("%d", &val);
        if (val > max) max = val;
        if (val < min) min = val;
    }
    printf("%d", max - min);
}
