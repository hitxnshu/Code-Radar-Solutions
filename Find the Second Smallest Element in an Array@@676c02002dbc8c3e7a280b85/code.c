#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n>1 && (arr[1] != arr[0])){
        printf("%dd",arr[1]);
    }
    else{
         printf("-1");
    }
    }