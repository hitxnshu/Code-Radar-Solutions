#include<stdio.h>
int fibonacciSeries(int num){
    int a = 0;b = 1;
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

int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;

}