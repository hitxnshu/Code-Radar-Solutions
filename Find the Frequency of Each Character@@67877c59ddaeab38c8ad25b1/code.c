#include<stdio.h>
#include<string.h>
int main{
    char string[30];
    char ch;
    int count;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        ch = string[i];
        for(int j = i+1;j < length;j++){
            if(string[j]==ch){
                count++;
            }
        }
        printf("%c: %d",ch,count);
    }
}