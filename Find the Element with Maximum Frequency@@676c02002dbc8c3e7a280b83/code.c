#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxCount = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        int count = 1;
        for(int j = i+1;j < n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>maxCount){
           ans = arr[i];
        }
    }
    printf("%d",ans);
}