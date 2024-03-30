#include<stdio.h>
#include<math.h>

int main() {
   int a = 0;
   scanf("%d", &a);
   int k = 1, p = a*a - ceil(a*a/2) + 1;
   for (int i = 0; i < a; i++){
    for (int j = 0; j < a; j++){
        if ((i + j)%2 == 0){
            printf("%d ",k++);
        }
        else {
            printf("%d ",p++);
        }
    }
    printf("\n");
   }
   return 0;
}
