#include <stdio.h>
int main(){
    int n,sort = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i+1]>=arr[i]){
            sort = 1;
        }
    }
    if(!sort){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }


}