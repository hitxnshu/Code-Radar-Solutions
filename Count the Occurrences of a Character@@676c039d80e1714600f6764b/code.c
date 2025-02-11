#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",&string);
    char ch;
    scanf("%c",&ch);
    int count = 0;
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i]==ch){
            count++;
        }
    }
    printf("%d",count);
}