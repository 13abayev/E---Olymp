#include <stdio.h>

int main(){
    int r,w,l;
    scanf("%d %d %d",&r,&w,&l);
    if (2*r >= w && 2*r >= l && 4*r*r >= (w*w + l*l)){
        printf("YES");
        return 0;
    }
    printf("NO");
}