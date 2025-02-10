#include <stdio.h>
int main(){
    int n,nfound = 0,num = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 1;j < 1000;j++){
        for(int i = 0;i < n;i++){
            if(arr[i]==j){
                pass;
            }
            nfound = 1;
            num = j; 
            break;
        }
    }
    if(nfound){
        printf("%d",num);
    }
    }