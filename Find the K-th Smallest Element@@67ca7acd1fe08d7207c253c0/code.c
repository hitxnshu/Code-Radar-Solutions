int kthSmallest(int arr[],int n,int k){
    int temp = 0;
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k-1];
}