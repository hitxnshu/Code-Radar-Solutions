#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={};
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int small = arr[0];
    for(int i=0;i<5;i++){
        if(small>arr[i]){
            small = arr[i];
        }
    }
    int great = arr[0];
    for(int j =0;j<5;j++){
    if(arr[j]>great){
        great = arr[j];

    }}
    printf("%d %d",small,great);

}