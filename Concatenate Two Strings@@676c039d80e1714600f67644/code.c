#include <stdio.h>
int main(){
    char string1[20];
    fgets(string1,sizeof(string1),stdin);
    char string2[20];
    fgets(string2,sizeof(string2),stdin);
    strcat(string1,string2);
    printf("%s",string1);
}