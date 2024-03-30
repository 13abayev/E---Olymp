#include<stdio.h>

int main() {
   int t;
   scanf("%d", &t);

   for (int i = 0; i < t; i++){
    int n;
    scanf("%d", &n);
    int votes[n];
    int cem = 0;
    int maks = 0;
    int maks_index;
    int no_winner = 0;
    for (int j = 0; j < n; j++){
        scanf("%d", &votes[j]);
        cem += votes[j];
        if(votes[j] == maks){
            no_winner = 1;
        }
        if (votes[j] > maks){
            maks = votes[j];
            no_winner = 0;
            maks_index = j+1;
        }
    }
    if (no_winner == 1){
        printf("no winner\n");
    }
    else if(maks > cem/2){
        printf("majority winner %d\n", maks_index);
    }
    else{
        printf("minority winner %d\n", maks_index);
    }
   }


   return 0;
}
