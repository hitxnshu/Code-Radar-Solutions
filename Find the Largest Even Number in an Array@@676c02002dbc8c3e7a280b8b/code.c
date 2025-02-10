#include <stdio.h>
int main(){
    int n,even = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i]%2==0){
            do{
                even = arr[i];
                }
            while(arr[i]>even);
            }
            printf("-1");
            }
            printf("%d",even);
            }