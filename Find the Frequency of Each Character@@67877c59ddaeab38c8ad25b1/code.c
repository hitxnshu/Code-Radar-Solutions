#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    char ch;
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        ch = string[i];
        int count = 0;
        for(int j = i;j < length;j++){
            if(ch == string[j]){
                count++;
            }
        }
        printf("%c: %d\n",ch,count);
 
        
 
    }
}