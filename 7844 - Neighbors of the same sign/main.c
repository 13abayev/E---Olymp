#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d", &nums[i]);
        if(i == 0){
            continue;
        }
        else{
            if(nums[i] * nums[i-1] > 0){
                printf("%d %d\n", nums[i-1], nums[i]);
            }
        }
    }
}
