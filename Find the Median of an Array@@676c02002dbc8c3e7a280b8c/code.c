#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int arr[n];
    int k = n/2;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    if (n%2==0){
        sum = (arr[k]+arr[k+1])/2;
    }
    else{
        sum = arr[n/2];
    }
    printf("%d",sum);
}