#include <stdio.h>
int main(){
    int n,temp = 0,count = 0;
    scanf("%d",&n);
    while(num>0){
        temp = num%10;
        if(temp == 0){
            count++;
        }
        num = num / 10;
    }
    printf("%d",count);
}