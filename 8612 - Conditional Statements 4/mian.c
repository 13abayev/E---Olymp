#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int y;
    if (x >= 0){
        y = x*x*x + 2*x*x + 4*x -6;
    }
    else{
        y = x*x*x-7*x;
    }

    printf("%d",y);
}