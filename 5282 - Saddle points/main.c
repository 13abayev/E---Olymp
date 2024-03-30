#include<stdio.h>

int main() {
    int m,n;
    scanf("%d %d", &n,&m);
    int mins[n];
    int maxs[m];
    int matrix[n][m];
    int mini;
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++){
            scanf("%d",&matrix[i][j]);
            if(j == 0){
                mini = matrix[i][j];
            }
            if(matrix[i][j] < mini){
                mini = matrix[i][j];
            }
        }
        mins[i] = mini; 
    }

    int maks;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(j == 0){
                maks = matrix[j][i];
            }
            if (matrix[j][i] > maks){
                maks = matrix[j][i];
            }
        }
        maxs[i] = maks; 
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(mins[i] == maxs[j]){
                count++;
            }
        }
    }
    printf("%d",count);
}
