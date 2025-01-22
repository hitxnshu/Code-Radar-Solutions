#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={};
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    if(arr[1]>arr[0] && arr[2]>arr[1] && arr[3]>arr[2] && arr[4]>arr[3]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}