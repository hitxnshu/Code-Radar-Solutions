void factorialRange(int start,int end){
    int prod = 1;
    for(int i = start;i<=end;i++){
        if(i==0 || i==1){
            printf("1");
        }
        else{
            for(int j = 1;j<=i;j++){
                 prod = prod*j;
            }
            printf("%d",prod);
        }
    }
}