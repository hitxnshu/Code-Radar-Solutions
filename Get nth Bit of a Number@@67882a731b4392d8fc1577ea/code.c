#include<stdio.h>
int main(){
    int a,b,and = 0;
    scanf("%d %d",&a,&b);
    int c = (1 << b);
    and = a & c;
    if(and == 0){
        printf("0");
    }
    else if(and == c){
        printf("1");
    }
}