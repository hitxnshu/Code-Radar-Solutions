#include <stdio.h>
int main(){
    int n,num = 0,count = 0,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
    num = arr[i];
    for(int j = 1;j < n;j++){
        if(arr[j]==num){
            count++;
            found = 1;
        }
    }}  
    if(!found){
        num = arr[i+1];
    }
    else{
        if(count>(n/2)){
            printf("%d",count);
        }
        else{
            printf("-1");
        }
    }
    
}