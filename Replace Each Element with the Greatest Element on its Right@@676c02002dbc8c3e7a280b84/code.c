#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int num = 0;
    for(int i = 0;i < n;i++){
       num = arr[i];
       for(int j = i+1;j < n;j++){
        if(arr[j]>num){
            num == arr[j];
        }
        printf("%d",num);
       }
    }
}