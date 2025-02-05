#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
        for(int j = 0;j <= n/2;j++){
            if (arr[j]!=arr[n-j]){
                printf("NO");
                break;
            }
            printf("YES");
        
    }
}