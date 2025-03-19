#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    char ch;
    int visited = 0;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        ch = string[i];
        visited = 1;
        int count = 0;
        for(int j = i;j < length;j++){
            if(ch == string[j]){
                count++;
            }
        }
        printf("%c: %d\n",ch,count);
 
        
 
    }
    if(visited){
        continue;
    }
}