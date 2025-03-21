void caesarCipher(char message[], int shift, char encrypted[]){
    int length = strlen(message);
    for(int i = 0;i < length;i++){
        for(int j = 1;j <= shift;j++){
            message[i] = message[i]++;

        }
        encrypted[i] = message[i];
    }

}
