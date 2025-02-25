#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    fgets(string,sizeof(string),stdin);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        string[i] = string[length-1-i];
        printf("%c",string[i]);

    }
}