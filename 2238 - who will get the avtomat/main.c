#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float avg;
    long total_sum = 0;
    int count = 0;
    int students[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &students[i]);
        total_sum += students[i];
    }
    avg = total_sum / n;
    for(int i = 0; i < n; i++){
        if (students[i] > avg){
            count++;
        }
    }
    printf("%d", count);
}
