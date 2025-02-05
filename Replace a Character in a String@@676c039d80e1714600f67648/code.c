#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",string);
    char a,b;
    scanf(" %c",&a);
    scanf(" %c",&b);
    int length = strlen(string);
    for(int i = 0; i < length;i++){
        if(string[i]==a){
            string[i] = b;
            
        }
    }
    printf("%s",string);
    
}