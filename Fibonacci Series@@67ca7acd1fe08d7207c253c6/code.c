
int fibonacciSeries(int num){
    int a = 0;
    int b = 1,c;
    if(num==1){
        printf("0");
    }
    else if(num==2){
        printf("0 1");
    }
    for(int i = 2;i < num;i++){
        c = a + b;
        printf("%d",c);
        a = b;
        b = c;

    }
}
