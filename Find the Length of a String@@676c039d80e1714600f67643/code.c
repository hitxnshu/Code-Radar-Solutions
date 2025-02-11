#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    fgets(string,sizeof(string),stdin);
    int length = strlen(string);
        if (length > 0 && string[length - 1] == '\n') {
        string[length - 1] = '\0';
        length--;
    }
    if(length == 0){
        printf("0");
    }
    else{
    printf("%d",length);
}}
//here we faced a problem in case of empty input 
//when user enters fgets instead of taking empty string takes '/n' 
/*Check if there's a newline at the end

length > 0: Ensures there is at least one character.
string[length - 1] == '\n': Checks if the last character is a newline.
Remove the newline

string[length - 1] = '\0'; replaces \n with a null terminator (\0), effectively removing it.
Adjust the length

length--; reduces the length count since the newline is removed.
*/