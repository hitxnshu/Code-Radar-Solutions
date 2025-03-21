selectionSort(int arr[],int n){
    int temp,tempo;
    for(int i = 0;i < n-1;i++){
       for(int j = i+1;j < n-1;j++){
        temp = arr[j];
        for(int k = j+1;k < n-1;k++){
            if(arr[k]<temp){
                temp = arr[k];
            }
        }

       }
       if(arr[i]<temp){
          tempo = arr[i];
          arr[i] = temp;
          temp = tempo;
       }
    }
}
printArray(int arr[],int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}