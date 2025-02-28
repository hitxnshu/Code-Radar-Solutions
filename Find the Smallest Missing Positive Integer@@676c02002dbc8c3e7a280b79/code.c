#include <stdio.h>
int main(){
    int n,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int num = 0;
    for(int j = 1;j < 100;j++){
         num = j;
        for(int i = 0;i < n;i++){
            if(arr[i]==j){
                found = 1;
            }
        }
    }
    if(!found){
        printf("%d",num);
    }
}