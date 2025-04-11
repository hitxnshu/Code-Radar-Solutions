int mostPlayedGame(int games[], int n){
    int maxCount = 0;
    for(int i = 0;i < n;i++){
        int count = 0;
        for(int j = i+1;j < n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
        }
    }
    printf("%d",maxCount);
}