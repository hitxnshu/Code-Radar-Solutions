#include <stdio.h>
int main(){
    int num,number = 0;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1;i < num-1;i++){
        if(arr[i]>arr[0] && arr[i]>arr[num-1]){
            number = arr[i];
            break;
        }
    }
    printf("%d",number);
}