#include <stdio.h>
int main(){
    char sentence[100];
    fgets(sentence,sizeof(sentence),stdin);
    printf("You entered: %s",sentence);
}