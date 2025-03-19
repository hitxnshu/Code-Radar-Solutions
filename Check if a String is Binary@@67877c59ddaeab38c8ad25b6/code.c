#include<stdio.h>
#include<string.h>
int main(){
    int yes = 1;
    char string[20];
    scanf("%s",&string);
    int length = strlen(string);
    if(strcmp(string,"") == 0){
        printf("No");
    }
    else{
    for(int i = 0;i < length;i++){
        if(string[i]!='0' && string[i]!='1'){
            yes = 0;
        }
        
    }}
    if(!yes){
        printf("No");
    }
    else{
        printf("Yes");
    }

}