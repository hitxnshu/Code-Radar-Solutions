#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",&string);
    int found = 0;
    char ch ; 
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        for(int j = i+1;j < length;j++){
            if(i!=j && (string[i] == string[j])){
                found = 1;
                break;
            }
        }
        if(!found){
            ch = string[i];
            printf("%c",ch);
            break;
        } 
    }


}