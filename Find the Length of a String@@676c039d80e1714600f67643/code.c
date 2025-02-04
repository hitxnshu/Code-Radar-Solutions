#include <stdio.h>
int main(){
    char string[20];
    scanf("%s",&string);
    int length = (sizeof(string))/(sizeof(string[0]));
    printf("%d",length);
}