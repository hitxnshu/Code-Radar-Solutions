#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    char ch;
    int visited[256] = {0};
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
            if(visited[(unsigned char)string[i]]){
            continue;
            }
        ch = string[i];
        int count = 0;
        for(int j = i;j < length;j++){
            if(ch == string[j]){
                count++;
                visited[(unsigned char)ch] = 1;
                
            }
        }
        printf("%c: %d\n",ch,count);
 
        
        }
    }



//(unsigned char)ch ensures that ch is treated as a valid index between 0-255 in the visited array