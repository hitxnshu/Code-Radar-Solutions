#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    char ch1;
    int nrep = 1;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
    char ch = string[i];
    for(int j = 1;j < length;j++){
        if(string[j]==ch){
            nrep= 0;
            printf("-");
            break;
        }
        else{
            ch1 = ch;
        }
    }}
    if(!nrep){
        printf("%c",ch1);
    }
}