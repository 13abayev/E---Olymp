#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total_sum = 0;
    float mean;
    int nums[n];
    int count = 0;
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        scanf("%d", &nums[i]);
        total_sum += nums[i];
    }
    mean = 1.0 * total_sum / n;
    for(int i = 0; i < n; i++){
        if(nums[i] > mean){
            sum += nums[i];
            count ++;
        }
    }
    printf("%d %d", sum, count);
}
