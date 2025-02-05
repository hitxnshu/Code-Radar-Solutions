#include <stdio.h>
int main(){
    int n,num = 0,count = 0,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i]==0){
            arr[n-i] == arr[i];
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d",arr[i]);
    }
}