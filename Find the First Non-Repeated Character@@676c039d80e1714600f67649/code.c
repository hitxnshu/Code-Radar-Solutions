#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",&string);
    char ch ; 
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        int count = 1;
        for(int j = i+1;j < length;j++){
            if(string[i]==string[j]){
                count++;
            }
        }
        if(count<=1){
            ch = string[i];
            goto end;
        }
    }
    end:
    printf("%c",ch);


}