#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *input;
    int k;
    input = malloc(n*sizeof(int));
    for(k = 0; k < n ; k++){
        scanf("%d",&input[k]);
    }
    int small = arr[0];
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small = arr[i];
        }
    }
    int great = arr[0];
    for(int j =0;j<n;j++){
    if(arr[j]>great){
        great = arr[j];

    }}
    printf("%d %d",small,great);
    free(input);

}