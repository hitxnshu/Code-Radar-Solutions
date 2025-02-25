#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char sen[50];
    fgets(sen,sizeof(sen),stdin);
    int length = strlen(sen);
    for(int i = 0;i < length;i++){
        if(sen[i]>'a' && sen[i]<'z'){
            sen[i] = toupper(sen[i]);
            printf("%c",sen[i]);
        }
        else if(sen[i]>'A' && sen[i]<'Z'){
            sen[i] = tolower(sen[i]);
            printf("%c",sen[i]);
        }
        else{
            printf("%c",sen[i]);
        }
        
    }
}