#include <stdio.h>
int main(){
    int n,small = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    for(int j = 1;j < n;j++){
        if (arr[j]<small){
            small = arr[j];
        }
    }
    for(int k = 0;k < 100;k++){
        for(int a = 0; a < n;a++){
        if((small+k) == arr[a]){
            printf("%d",small+k);
            break;
        }
    }}
}