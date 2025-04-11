#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxCount = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        int count = 1;
        for(int j = 0;j < n;j++){
            while(i!=j){
                if(arr[j]>arr[i]){
                    count++;
                }
            }
        }
        if(count>maxCount){
            maxCount =  count;
        }
    }
    printf("%d",maxCount);
}