#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if (arr[i] % 2 == 0){
            int even = arr[i];
        }
        else {
            int odd = arr[i];
        }
    }
    printf("%d %d",even,odd);
}