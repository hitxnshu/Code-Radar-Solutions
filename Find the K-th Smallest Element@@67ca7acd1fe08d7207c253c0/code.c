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
    if(k>n){
        return -1;
    }
    else{
    return arr[k-1];
}}