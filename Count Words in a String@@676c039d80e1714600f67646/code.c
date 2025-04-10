#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    int word = 1;
    int i = 0;
        while(string[i] != '\0'){
            if(string[i] == ''){
               word++;
            }
            i++;
        }
    }

printf("%d",word)