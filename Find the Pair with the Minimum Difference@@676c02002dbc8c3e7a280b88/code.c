#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int n1 = arr[0],n2 = arr[1];
    int diff = abs(n1-n2);
    for(int j = 1;j < n-1;j++){
        int current_diff = abs(arr[j]-arr[j+1]);
        if(current_diff > diff){
            diff = current_diff
             n1 = arr[j];
             n2 = arr[j+1];
        }
    }
    if(n1>n2){
        printf("%d %d",n2,n1);
    }
    else if(n2>n1){
        printf("%d %d",n1,n2);
    }
}