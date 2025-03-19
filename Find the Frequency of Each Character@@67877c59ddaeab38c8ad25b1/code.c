#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    char ch;
    int visited = 0;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i] == '\0') continue;
        else{

        
        ch = string[i];
        visited = 1;
        int count = 0;
        for(int j = i;j < length;j++){
            if(ch == string[j]){
                count++;
                string[j] = '\0'
            }
        }
        printf("%c: %d\n",ch,count);
 
        
        }
    }
    if(visited){
        continue;
    }
}