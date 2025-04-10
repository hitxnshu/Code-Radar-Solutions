#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char ch;
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        int count = 1;
        for(int j = i+1;j < length;j++){
            if(string[i] == string[j]){
                count++;
            }
        }
        if(count == 1){
           ch = string[i];
        }
        else{
            ch = '-';
        }
    }
    printf("%c",ch);
}