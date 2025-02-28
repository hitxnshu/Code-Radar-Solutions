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
    for(int j = 2;j < n;j++){
        if(abs(arr[j-1]-arr[j]) > diff){
             n1 = arr[j-1];
             n2 = arr[j];
        }
    }
    if(n1>n2){
        printf("%d %d",n2,n1);
    }
    else if(n2>n1){
        printf("%d %d",n1,n2);
    }
}