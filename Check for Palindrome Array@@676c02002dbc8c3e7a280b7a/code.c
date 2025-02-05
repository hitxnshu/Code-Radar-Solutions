#include <stdio.h>
int main(){
    int n,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
        for(int j = 0;j < n/2;j++){
            if (arr[j]!=arr[n-j-1]){
                found = 0;
                break;
            }
        
    }
    if(found){
        printf("YES");
    }
    else{
        printf("NO");
    }
}