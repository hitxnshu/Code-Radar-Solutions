#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0,j = 0;
    while(i<n && j<n){
        if((i==0 || i==n-1) && (j>=0 &&j<n)){
            printf("*");

        }
        else if((i!=0 && i!=n-1)&&(j==0 || j == n-1)){
            printf("*");
        }
        
    }
}