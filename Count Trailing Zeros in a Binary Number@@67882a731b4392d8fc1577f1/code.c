#include <stdio.h>
int main(){
    int n,num = 0,temp = 0,count = 0;
    scanf("%d",&n);
    num = ~n;
    while(num>0){
        temp = num%10;
        if(temp == 1){
            count++;
        }
        num = num / 10;
    }
    printf("%d",count);
}