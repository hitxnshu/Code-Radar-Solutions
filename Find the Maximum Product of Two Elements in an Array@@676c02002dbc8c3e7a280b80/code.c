#include <stdio.h>
int main(){
    int n,big = -100;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            while(big>(arr[i]*arr[j])){
                big = arr[i]*arr[j];
            }
        }
    }
    printf("%d",big);
}