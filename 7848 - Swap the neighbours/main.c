#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d", &nums[i]);
    }
    int m = n;
    if(n % 2 == 1){
        m -= 1;
    }
    for(int i = 0; i < m; i+=2){
        int temp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}
    