#include<stdio.h>

int main(){
    int count = 0;
    char sentence[250];
    gets(sentence);
    int i = 0;
    int read_word = 0;
    while(sentence[i] != '\0'){
        while(sentence[i] == ' ' && sentence[i] != '\0'){
            i++;
        }
        while(sentence[i] != ' ' && sentence[i] != '\0'){
            i++;
            read_word = 1;
        }
        if(read_word == 1){
            count++;
        }
    }
    printf("%d\n", count);
}
