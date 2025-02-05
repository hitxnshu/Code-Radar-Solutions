#include <stdio.h>
int main(){
    char string[20];
    scanf("%s",&string);
    char a,b;
    scanf("%c\n",&a);
    scanf("%c",&b);
    int length = sizeof(string)/sizeof(string[0]);
    for(int i = 0; i < length;i++){
        if(string[i]==a){
            char *string[i] == b;
        }
    }
    printf("%s",&string);
}