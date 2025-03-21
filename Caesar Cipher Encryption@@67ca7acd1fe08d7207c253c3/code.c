#include<string.h>
void caesarCipher(char message[], int shift, char encrypted[]){
    int length = strlen(message);
    char temp;
    for(int i = 0;i < length;i++){
        temp = message[i] + shift;
        encrypted[i] = temp;
    }
    encrypted[length] = '\0';

}