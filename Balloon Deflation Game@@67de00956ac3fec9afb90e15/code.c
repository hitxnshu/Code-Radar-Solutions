void deflateBalloons(int air[],int n){
    int flat = 1;
    for(int i = 0;i < n;i++ ){
        if(air[i] == 0){
            flat = 0;
        }
    }
    int small = 0;
    int count = 0;
    if(!flat){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(air[j]>0){
                count++;
            }
        }
        printf("%d",count);
        small = air[i];
        for(int j = i+1;j < n;j++){
            if(air[j]<small){
                small = air[j];
            }
        }
        for(int j = 0;j < n;j++){
            air[j] = air[j] - small;
        }
        
    }
}}