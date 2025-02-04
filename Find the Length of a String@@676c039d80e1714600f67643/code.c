#include <stdio.h>
int main(){
    char string[];
    scanf("%s",string);
    int length = 0;
    length = (sizeof(string))/(sizeof(string[0]));
    printf("%d",length);
}