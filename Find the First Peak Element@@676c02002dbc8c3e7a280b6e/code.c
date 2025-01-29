#include <stdio.h>
int main(){
    int numb;
    scanf("%d",&numb);
    int arr[numb];
    for(int i = 0;i < numb;i++){
        scanf("%d",&arr[i]);
    }
    int number = 0;
    for(int i = 1;i < numb-1;i++){
        if(arr[i]>arr[0] && arr[i]>arr[numb-1]){
            number = arr[i];
            break;
        }
    }
    printf("%d",number);
    return 0;
}