#include<stdio.h>
#include<math.h>
int main(){
    int a,b,and = 0;
    scanf("%d %d",&a,&b);
    and = (a && (pow(2,b)));
    if(and == 0){
        printf("0");
    }
    else{
        printf("1");
    }
}