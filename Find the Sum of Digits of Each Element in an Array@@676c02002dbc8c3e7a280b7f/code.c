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
        int num = arr[i];
        while(num>0){
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }
    printf("%d",sum);
    }
}