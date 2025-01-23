#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
    if(i==0 || i==n-1){
        for(int j = 0;j<n;j++){
            printf("*");
        }
    
        
    }
    else if(i!=0 || i!=n-1){
    
            if(j==0 || j==n-1){
                printf("*");
            }
        
    }
    printf("\n");
}}