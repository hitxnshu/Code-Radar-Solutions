#include <stdio.h>
int main(){
    int n,even = -10,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i]%2==0){
            while(arr[i]>even){
                even = arr[i];
            }
            found = 1;
            }
            }
            if(!found){
                printf("-1");
            }
            else{
            printf("%d",even);
            }}