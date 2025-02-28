#include <stdio.h>
int main(){
    int n,num = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i = 0;i < n;i++){
    num = arr[i];
    for(int j = i+1;j < n;j++){
        if(arr[j]==num){
            printf("%d",arr[j]);
            found = 1;
            return 0;
        }
    }

    }
    if(!found){
        printf("-1");
    }}
