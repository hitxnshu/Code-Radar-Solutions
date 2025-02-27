#include <stdio.h>
int main(){
    int n,num = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
    num = arr[i];
    for(int j = i+1;j < n;j++){
        if(arr[j]==num){
            printf("%d",arr[j]);
            break;
        }
    }

    }}
