#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(int k = 0; k < n ; k++){
        scanf("%d",&arr[k]);
    }
    int small = arr[0],great = arr[0];
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small = arr[i];
        }
    if(arr[i]>great){
        great = arr[i];

    }}
    printf("%d %d",small,great);
    free(arr);
    return 0;

}