#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    fgets(string,sizeof(string),stdin);
    int length = 0;
    length = strlen(string);
    printf("%d",length);
    if(length == 0 ){
        printf("0");
    }
}