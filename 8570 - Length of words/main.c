#include<stdio.h>

int main(){
    char sentence[100];
    gets(sentence);
    char c = getchar();
    int i =0;
    int count = 0;
    while(sentence[i] != '\0'){
        if(sentence[i] == c || sentence[i] == c - 32){
            count ++;
        }
        i++;
    }
    printf("%d\n",count);
}
