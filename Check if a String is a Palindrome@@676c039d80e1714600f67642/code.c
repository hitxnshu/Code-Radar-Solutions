#include<stdio.h>
#include<string.h>
int main(){
    int yes = 1;
    char string[20];
    scanf("%s",%string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i]!=string[n-i-1]){
            printf("No");
            yes = 0;
        }
    }
    if(yes){
        printf("Yes");
    }

}