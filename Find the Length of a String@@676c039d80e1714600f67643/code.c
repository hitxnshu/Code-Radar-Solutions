#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    fgets(string,sizeof(string),stdin);
    int length = 0;
    length = strlen(string);
    if(string[0] == "/n"){
        printf("0");
    }
    else{
    printf("%d",length);
}}