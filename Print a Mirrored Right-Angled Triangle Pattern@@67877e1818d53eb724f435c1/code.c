#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =0 ;i<n-2;i++){
        for(int j = n-i-1;j>=1;j--){
            printf("");
        }
        
    
    printf("\n");}
    for(int i =0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}