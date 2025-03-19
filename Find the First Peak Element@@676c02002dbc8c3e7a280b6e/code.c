#include<stdio.h>
int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     int found = 0;
     for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
     }
     int temp = 0;
     for(int i = 0;i < n;i++){
        if(i == 0){
           if(arr[i]>arr[i+1]){
            temp = arr[i];
                printf("%d",temp);
                found = 1;
                break;
                
           }
        }
        else if(i == n-1){
           if(arr[i]>arr[i-1]){
            temp = arr[i];
                printf("%d",temp);
                found = 1;
                break;
           }
        }
        else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                temp = arr[i];
                printf("%d",temp);
                found = 1;
                break;
            }
        }
     }
     if(!found){
        printf("-1");
     }
}
// HERE IN IF ELSE LOOP FOUND = 1 NEEDED TO BE WRITTEN BEFORE BREAK