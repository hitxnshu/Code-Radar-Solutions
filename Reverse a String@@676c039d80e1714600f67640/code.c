#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    char ch;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length/2;i++){
        ch = string[i];
        string[i] = string[length-i-1];
        string[length-i-1] = ch;

    }
    printf("%s",string);
}