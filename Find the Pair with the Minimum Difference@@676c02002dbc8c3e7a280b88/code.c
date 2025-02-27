#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int n1 = 0,n2 = 0;
    int diff = abs(arr[0] - arr[1]);
    for(int j = 1;j < n;j++){
        if((arr[j]-arr[j+1]) > diff){
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