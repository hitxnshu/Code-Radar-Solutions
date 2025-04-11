void factorialRange(int start,int end){
    if(start<0 ||end <0){
        printf("Invalid range");
    }
    else if(start>end){
             printf("Invalid range");
    }
    else{
    for(int i = start;i<=end;i++){
        int prod = 1;
        if(i==0 || i==1){
            printf("1\n");
        }
        else{
            for(int j = 1;j<=i;j++){
                 prod = prod*j;
            }
            printf("%d\n",prod);
        }
    }
}}