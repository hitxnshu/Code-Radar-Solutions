#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum = sum + arr[i-1];
        arr[i] = sum;
        printf("%d",arr[i-1]);
    }
}