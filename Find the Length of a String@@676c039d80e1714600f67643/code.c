#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    fgets(string,sizeof(string),stdin);
    int length = strlen(string);
    if(length == 0){
        printf("0");
    }
    else{
    printf("%d",length);
}}