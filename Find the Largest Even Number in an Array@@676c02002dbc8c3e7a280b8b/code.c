#include <stdio.h>
int main(){
    int n,even = 0,found = 0;
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
            found = 1;
            }
            }
            if(!found){
                printf("-1");
            }
            else{
            printf("%d",even);
            }}