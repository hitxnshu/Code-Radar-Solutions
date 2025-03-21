void selectionSort(int arr[],int n){
    int temp = 0;
    for(int i = 0;i < n-1;i++){
       for(int j = i+1;j < n;j++){
           if(arr[j]<arr[i]){
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
           }
        }

       }

}
void printArray(int arr[],int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}