#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d",a,b);
    //a = a ^ b
    //b = a ^ b = (a ^ b) ^ b = b
    //a = a ^ b = (a ^ b) ^ a = b
}