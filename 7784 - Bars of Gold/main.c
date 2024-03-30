#include <stdio.h>

int main(){
    int x1,x2,x3;
    scanf("%d %d %d",&x1,&x2,&x3);

    int diff = 0;

    if ((x1 + x2 == x3) || (x1 + x3 == x2) || (x3 + x2 == x1)){
        printf("0");
        return 0;
    }

    diff = x2 - x3;
    if (diff < 0){
        diff *= -1;
    }
    if ((x1 - diff >= 0) && ((x1 - diff) % 2 == 0)){
        printf("1\n%d %d", diff + (x1 - diff)/2, (x1 - diff)/2);
        return 0;
    }
    
    diff = x3 - x1;
    if (diff < 0){
        diff *= -1;
    }
    if ((x2 - diff >= 0) && ((x2 - diff) % 2 == 0)){
        printf("2\n%d %d", diff + (x2 - diff)/2, (x2 - diff)/2);
        return 0;
    }

    diff = x2 - x1;
    if (diff < 0){
        diff *= -1;
    }
    if ((x3 - diff >= 0) && ((x3 - diff) % 2 == 0)){
        printf("3\n%d %d", diff + (x3 - diff)/2, (x3 - diff)/2);
        return 0;
    }
    printf("-1");
}