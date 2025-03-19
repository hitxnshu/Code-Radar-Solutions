#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp = 0;
    int count = 0;
    int found  = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        temp = arr[i];
        for(int j = 0;j < n;j++){
            if(arr[j] == temp){
            count++;
            }
        }
        if(count>int(n/2)){
            printf("%d",arr[i]);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
}