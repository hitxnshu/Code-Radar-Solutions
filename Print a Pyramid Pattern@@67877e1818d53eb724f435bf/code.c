#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = n-i-1;j>=0;j--){
            printf(" ");
        }
        for(int j = 0;j < n;j++){
            printf("*");
        }
        for(int j = n-1;j < 2n-1;j++){
            printf("*")
        }
        printf("\n");
    }
}