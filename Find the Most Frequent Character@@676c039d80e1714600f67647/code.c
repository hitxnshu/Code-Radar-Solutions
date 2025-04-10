#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int count = 0;
    int maxCount = 0;
    fgets (string,sizeof(string),stdin);
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        for(int j = i+1;j < length;j++){
            if(string[i] == string[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
        }
    }
    printf("%d",maxCount);
}