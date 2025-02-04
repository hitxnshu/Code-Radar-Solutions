#include <stdio.h>
int main(){
    char string[];
    fgets(string,sizeof(string),stdin);
    int length = 0;
    length = (sizeof(string))/(sizeof(string[0]));
    printf("%d",length);
}