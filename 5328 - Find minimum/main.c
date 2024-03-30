#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int num,mini = 100001;
   for (int i = 0; i < n;i++){
    scanf("%d",&num);
    if (num < mini){
        mini = num;
    }
   }
   printf("%d",mini);
   return 0;
}
