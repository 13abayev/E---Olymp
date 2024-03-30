#include <stdio.h>

int main(){
    int k,w;
    int a1,b1,a2,b2,a3,b3;
    scanf("%d %d",&k, &w);
    scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a3,&b3);

    if ((a1 <= w && b1 >= k) || (a2 <= w && b2 >= k) || (a3 <= w && b3 >= k)){
        printf("YES");
        return 0;
    }
    if((a1 + a2 <= w && b1 + b2 >= k) || (a1 + a3 <= w && b1 + b3 >= k) || (a3 + a2 <= w && b3 + b2 >= k)){
        printf("YES");
        return 0;
    }
    if(a1 + a2 + a3 <= w && b1 + b2 + b3 >= k){
        printf("YES");
        return 0;
    }
    printf("NO");

}