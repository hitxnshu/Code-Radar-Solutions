int printPrimesInRange(int num1,int num2){
    int abc = 1;
    for(int i = num1;i <= num2;i++){
        if(i>=2){
            for(int j = 2;j < i;j++){
                if(i%j==0){
                   abc = 0;
                   break;
                }
            }
            printf("%d",i);
        }
    }
}