#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int power = (1 << b);
    int ans = a ^ power;
    printf("%d",ans);
}