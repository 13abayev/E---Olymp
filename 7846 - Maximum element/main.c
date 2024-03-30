#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int index = 0;
    int maks = -101;
    int num;
    for(int i = 0; i < n;i++){
        scanf("%d", &num);
        if(num > maks){
            maks = num;
            index = i;
        }
    }
    printf("%d %d", maks, index+1);

}
