#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int store = 0;
    for(int j = 1;j<1000;j++){
        for(int i = 0;i < n;i++){
            if(arr[i]==j){

            }
            else{
                store = j;
                printf("%d",store);
                break;
            }
        }
    }

}