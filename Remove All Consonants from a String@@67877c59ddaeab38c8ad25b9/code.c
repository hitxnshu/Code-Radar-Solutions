#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    char space = ' ';
    int length = strlen(sen);
    for(int i = 0;i < length;i++){
        if((sen[i]>'a' && sen[i]<'z') || (sen[i]>'A' && sen[i]<'Z')){
            if(sen[i]!='a'&&sen[i]!='e'&&sen[i]!='i'&&sen[i]!='o'&&sen[i]!='u'&&sen[i]!='A'&&sen[i]!='E'&&sen[i]!='I'&&sen[i]!='O'&&sen[i]!='U'){
                sen[i] = space;
                
            }
        }
    }
    printf("%s",sen);
}