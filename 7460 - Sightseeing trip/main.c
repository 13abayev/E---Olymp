#include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d %d %d",&n, &m, &k);
    int count = 0;
    if (n % k == 0){
        count += n/k;
    }
    else if (n % k != 0){
        count += n/k + 1;
    }
    if (m % k == 0){
        count += m/k;
    }
    else if (m % k != 0){
        count += m/k + 1;
    }
    printf("%d\n",count);
}