#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int greater = a;
    if (b>greater){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
    return 0;
}