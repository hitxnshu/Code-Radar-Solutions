#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    char ch,ch1;
    int count = 0;
    fgets(sen,sizeof(sen),stdin);
    int length = strlen(sen);
    for(int i = 0;i < length;i++){
        ch = sen[i];
        for(int j = i+1;j < length;j++){
            if(ch == sen[j]){
                ch1 = sen[j];
                count++;
            }
        }
    }
    if(count > 0){
       printf("%c",ch1);
    }
}