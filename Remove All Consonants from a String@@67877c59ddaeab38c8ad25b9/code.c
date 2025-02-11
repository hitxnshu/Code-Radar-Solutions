#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    int length = strlen(sen);
    for(int i = 0;i < length;i++){
        
            if(sen[i]='a'||sen[i]='e'||sen[i]='i'||sen[i]='o'||sen[i]='u'||sen[i]='A'||sen[i]='E'||sen[i]='I'||sen[i]='O'||sen[i]='U'||(sen[i]>0&&sen[i]<9)){
                printf("%c",sen[i]);
                
            }
        }
    }
