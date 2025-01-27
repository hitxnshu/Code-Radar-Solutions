#include <stdio.h>
int main(){
    int n,scmall,great;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    great = arr[0];
    for(int i = 1;i < n;i++){
        if (arr[i]>great){
            great = arr[i];
        }
    }

    for(int j = 1;j <100;j++){
        for(int a = 0; a < n; a++){
        if((great - j) == arr[a]){
            scmall = arr[a];
            printf("%d",scmall);
            break;
        }
    }
}}