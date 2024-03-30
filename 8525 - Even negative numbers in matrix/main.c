#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] < 0 && matrix[i][j] % 2 == 0){
                sum += matrix[i][j];
                count ++;
            }
        }
    }
    printf("%d %d", count, sum);
}
