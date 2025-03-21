#include<string.h>
void caesarCipher(char message[], int shift, char encrypted[]){
    int length = strlen(message);
    for(int i = 0;i < length;i++){
        message[i] = message[i] + shift;
        encrypted[i] = message[i];
    }

}