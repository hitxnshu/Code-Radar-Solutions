#include<stdio.h>
int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
     }
     int temp = 0;
     for(int i = 0;i < n;i++){
        if(i == 0){
           if(arr[i]>arr[i+1]){
            temp = arr[i];
                printf("%d",temp);
                break;
           }
        }
        else if(i == n-1){
           if(arr[i]>arr[i-1]){
            temp = arr[i];
                printf("%d",temp);
                break;
           }
        }
        else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                temp = arr[i];
                printf("%d",temp);
                break;
            }
        }
     }
}