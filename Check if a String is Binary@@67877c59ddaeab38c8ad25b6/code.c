#include<stdio.h>
#include<string.h>
int main(){
    int yes = 1;
    char string[20];
    scanf("%s",&string);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if(string[i]!=0){
            yes = 0;
            printf("No");
            break;
        }
        else if(string[i]!=1){
            yes = 0;
            printf("No");
            break;
        }
    }
    if(yes){
        printf("Yes");
    }

}