#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        int num = arr[i];
        int sum = 0,temp = 0;
        while(num>0){
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }
    printf("%d ",sum);
    }
}