void bubbleSort(char arr[],int n){
    char ch;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            if(arr[j]>arr[j+1]){
               ch = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = ch;
            }
        }
    }
}
void printArray(char arr[], int n){
    for(int i = 0;i < n;i++){
        printf("%c ",arr[i]);
    }
}