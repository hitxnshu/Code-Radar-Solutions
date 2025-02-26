#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char sen[100];
    char c;
    fgets(sen,sizeof(sen),stdin);
    int count = 0;
    int length = strlen(sen);
    if(strcmp(sen,' ') == 0){
        printf("0");
    }
    else{
    for(int i = 0;i < length;i++){
        if(sen[i]==' ' && sen[i-1]!= ' ' && sen[i+1]!= ' '){
            count++;
        }
    }
    printf("%d",count+1);
}}