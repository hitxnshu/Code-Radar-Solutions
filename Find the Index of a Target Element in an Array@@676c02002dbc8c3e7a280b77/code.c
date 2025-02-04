#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m,store = 0;
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            store = i;
            printf("%d",store);
            break;
        }
    }
    else{
        printf("-1");
    }

}