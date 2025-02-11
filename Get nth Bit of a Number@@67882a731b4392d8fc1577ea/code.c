#include<stdio.h>
#include<math.h>
int main(){
    int a,b,and = 0;
    scanf("%d %d",&a,&b);
    float c = pow(2,b);
    int d = c;
    and = a & d;
    if(and == 0){
        printf("0");
    }
    else if(and == d){
        printf("1");
    }
}