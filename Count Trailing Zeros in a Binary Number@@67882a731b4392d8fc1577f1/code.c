#include <stdio.h>
int main(){
    int n,temp = 0,count = 0;
    scanf("%d",&n);
    while(n>0){
        temp = n%10;
        if(temp == 0){
            count++;
        }
        n = n / 10;
    }
    printf("%d",count);
}