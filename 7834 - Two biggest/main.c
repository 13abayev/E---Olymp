#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int big1 = -101, big2 = -101;
    for(int i = 0 ; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] >= big1){
            big2 = big1;
            big1 = nums[i];
        }
        else if(nums[i] > big2){
            big2 = nums[i];
        }
    }
    printf("%d", big1 + big2);
}
