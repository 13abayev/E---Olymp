#include<stdio.h>

int main() {
    int num_1, num_2;
    char op;
    scanf("%d %c %d", &num_1, &op, &num_2);
    int res;
    if(op == '/'){
        res = num_1 / num_2;
    }
    else if(op == '+'){
        res = num_1 + num_2;
    }
    else if(op == '-'){
        res = num_1 - num_2;
    }
    else{
        res = num_1 * num_2;
    }
    printf("%d", res);
}
