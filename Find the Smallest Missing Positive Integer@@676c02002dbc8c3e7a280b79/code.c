#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int temp = 0;
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(arr[i] == arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i < n;i++){
        int j = 1;
        while(arr[i]>=0){
            if(arr[i]!=j){
              printf("%d",j);
              return 0;
            }
        }
        j++;

    }

}