#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    while(n>0){
        count++;
        n = n / 10;
    }
    int number = 0;
    number =  10*(count-1);
    int ans = 0;
    ans = n ^ number;
    if(ans%2==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}