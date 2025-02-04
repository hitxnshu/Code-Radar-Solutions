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
            even = arr[i];
            break;
        }
        else{
            printf("-1");
        }
        
    for(int i = 0;i < n;i++){
        if(arr[i]%2==0){
            if(arr[i]>even){
                even = arr[i];
            }
        }
    }
    

}printf("%d",even);}