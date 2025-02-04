#include <stdio.h>
int main(){
    char string[30];
    scanf("%s",&string);
    int length = (sizeof(string))/(sizeof(string[0]));
    printf("%d",length);
}