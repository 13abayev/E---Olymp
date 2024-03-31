#include <stdio.h>

int main(){
    char string[100];
    gets(string);
    int count = 0;
    while(string[count] != '\0'){
        count++;
    }
    printf("%s\n%d", string, count);
}