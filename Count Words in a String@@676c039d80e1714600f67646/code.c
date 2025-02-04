#include <stdio.h>
int main(){
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    int count = 0;
    int length = (sizeof(sen))/(sizeof(sen[0]));
    for(int i = 0;i < length;i++){
        if(sen[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
}