#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a >= -9 && a <= 9)
    {
        printf("Ok");
        return 0;
    }
    printf("No");
    return 0;
}
