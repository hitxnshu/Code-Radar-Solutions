int gateOpen(int threshold, int entryTimes[], int n){
    for(int i = 0;i < n;i++){
        int count = 0;
        if(entryTimes[i]<=0){
            count++;
        }
    }
    if(count>=threshold){
        return 1;
    }
    else{
        return 0;
    }
}