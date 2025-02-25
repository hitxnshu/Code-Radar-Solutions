#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[20];
    fgets(string,sizeof(string),stdin);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
       string[i] = toupper(string[i]);
       printf("%c",string[i]);
    }

}