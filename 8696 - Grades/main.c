#include <stdio.h>

int main(){
    char grades[1000];
    gets(grades);
    int i = 0;
    int twos = 0;
    int fives = 0;
    while(grades[i] != '\0'){
        if (grades[i] == '2'){
            twos ++;
        }
        else{
            fives ++;
        }
        i++;
    }
    if(fives > twos){
        printf("5\n");
    }
    else if(twos > fives){
        printf("2\n", twos);
    }
    else{
        printf("=");
    }
}