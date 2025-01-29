#include <stdio.h>
int main(){
    int num,number = 0;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 1;j < num-1;j++){
        if(arr[j]>arr[0] && arr[j]>arr[num-1]){
            number = arr[j];
            break;
        }
    }
    printf("%d",number);
}