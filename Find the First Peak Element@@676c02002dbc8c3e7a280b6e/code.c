#include <stdio.h>
int main(){
    int numb;
    scanf("%d \n",&numb);
    int arr[numb];
    for(int i = 0;i < numb;i++){
        scanf("%d \n",&arr[i]);
    }
    for(int j = 1;j < numb-1;j++){
        if(arr[j]>arr[0] && arr[j]>arr[numb]){
           int number = arr[j];
            break;
        }
    }
    printf("%d",number);
    return 0;
}