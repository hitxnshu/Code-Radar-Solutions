#include <stdio.h>
int main() {
    int n;
    int temp = 0,sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        while(arr[i]>0){
        temp = arr[i]/10;
        sum = sum + temp;
        temp = temp / 10;
    }
    printf("%d",sum);
    }
}