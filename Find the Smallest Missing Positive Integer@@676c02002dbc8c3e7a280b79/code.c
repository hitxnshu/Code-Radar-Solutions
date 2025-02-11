#include <stdio.h>
int main(){
    int n,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
for(int i = 0;i < n;i++){
    if(arr[i]>0){
        for(int j = i+1;j < n;j++){
            if(arr[i]==arr[j]){
                found = 1;
            }
        }
    }
}
if(!found){
    printf("%d",arr[i]);
}}