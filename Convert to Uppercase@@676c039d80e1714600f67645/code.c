#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[20];
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
       string[i] = toupper(string[i]);
       printf("%c",string[i]);
    }

}