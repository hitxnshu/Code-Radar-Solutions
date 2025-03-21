void selectionSort(char arr[],int n){
    char ch;
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j < n;j++){
            if(arr[j]<arr[i]){
                ch = arr[i];
                arr[i] = arr[j];
                arr[j] = ch;
            }
        }
    }
    printArray(char arr[], int n){
        for(int i = 0;i < n;i++){
            printf("%c",arr[i]);
        }
    }
}