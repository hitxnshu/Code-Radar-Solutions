#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    int length = strlen(sen);
    for(int i = 0;i < length;i++){
        if(sen[i]!=' '){
            printf("%c",sen[i]);
        }
    }
}