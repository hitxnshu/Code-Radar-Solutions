#include <stdio.h>
int main(){
    int n,odd,even;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if (arr[i] % 2 == 0){
            even = arr[i];
        }
        else {
             odd = arr[i];
        }
    }
    printf("%d %d",even,odd);
}