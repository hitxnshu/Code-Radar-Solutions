#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    ans = n ^ 1;
    if(ans%2==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

}