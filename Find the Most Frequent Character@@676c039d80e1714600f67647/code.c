#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int maxCount = 0;
    char ch;
    fgets (string,sizeof(string),stdin);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        int count = 0;
        for(int j = i+1;j < length;j++){
            if(string[i] == string[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
            ch = string[i];
        }
        else if(count == maxCount){
            if(ch>string[i]){
                ch = string[i];
            }
        }
    }
    printf("%c",ch);
}