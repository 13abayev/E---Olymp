#include <stdio.h>

int main(){
    char sentence[50];
    gets(sentence);
    int start = 1;
    int i = 0;
    while(sentence[i] != '\0'){
        while(sentence[i] == ' ' && sentence[i] != '\0'){
            i++;
        }
        while(sentence[i] != ' ' && sentence[i] != '\0'){
            if(start == 1){
                sentence[i] = sentence[i] - 32;
                start = 0;
            }
            i++;
        }
        start = 1;
    }
    printf("%s", sentence);
}