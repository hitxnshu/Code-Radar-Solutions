#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",&string);
    int found = 0;
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        int count = 1;
        for(int j = i+1;j < length;j++){
            if(string[i]==string[j]){
                count++;
            }
        }
        if(count<=1){
            printf("%c",string[i]);
            found = 1;
        }
    }
    if(!found){
        printf("-");
    }


}