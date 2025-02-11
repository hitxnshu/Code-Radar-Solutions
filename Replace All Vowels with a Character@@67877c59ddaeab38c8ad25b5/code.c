#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s\n",&string);
    char ch;
    scanf("%c",&ch);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i] == 'a'|| string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
            string[i] = ch;
        }
    }
    printf("%s",string);
}