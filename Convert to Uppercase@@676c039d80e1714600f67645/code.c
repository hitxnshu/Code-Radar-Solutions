#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[20];
    char string1[];
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
       string1[i] = toupper(string[i]);
       printf("%s",string1[i]);
    }

}