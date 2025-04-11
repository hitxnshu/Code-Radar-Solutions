void factorialRange(int start,int end){
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
}