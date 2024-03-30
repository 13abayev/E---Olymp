#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int min1, min2;
    int val;
    for(int i = 0; i < n; i++){
        scanf("%d", &val);
        if(i == 0){
            min1 = val;
        }
        if(val < min1){
            min2 = min1;
            min1 = val;
        }
        else if(val < min2 && val != min1){
            min2 = val;
        }
    }
    printf("%d %d",min1,min2);
}
