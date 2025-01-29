#include <stdio.h>
int main(){
    int numb,number = 0;
    scanf("%d",&numb);
    int arr[numb];
    for(int i = 0;i < numb;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1;i < numb-1;i++){
        if(arr[i]>arr[0] && arr[i]>arr[numb]){
            number = arr[i];
        }
    }
    printf("%d",number);
}