#include<stdio.h>
#include<string.h>
int main(){
    int yes = 0;
    char string[20];
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i]==string[length-i-1]){
            yes = 1;
        }
    }
    if(!yes){
        printf("No");
    }
    else{
        printf("Yes");
    }

}