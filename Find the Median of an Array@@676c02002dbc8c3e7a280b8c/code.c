#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int arr[n];
    int k =0;
    k = n/2;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    if (n%2==0){
        sum = (arr[k-1]+arr[k])/2;
    }
    else{
        sum = arr[(n-1)/2];
    }
    printf("%d",sum);
}