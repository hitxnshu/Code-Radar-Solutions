#include <stdio.h>
#include<string.h>
int main(){
    char string[30];
    int count = 0;
    scanf("%s",string);
    int length = strlen(string);
    for(int i = 0;i < length,i++){
        if((string[i]=='a') || (string[i]=='e') || (string[i]=='i') ||(string[i]=='o') ||(string[i] == 'u')){
            count++;
        }
    }
    printf("%d",count);
}