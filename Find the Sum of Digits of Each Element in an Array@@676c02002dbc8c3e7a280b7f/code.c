#include <stdio.h>
int sum(int n){
    temp = n % 10;
    sum = sum + temp;
    n = n / 10;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        sum(arr[i]);
        printf("%d",sum);
    }
}