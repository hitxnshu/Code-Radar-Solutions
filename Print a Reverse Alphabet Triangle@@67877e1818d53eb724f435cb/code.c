#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        char ch = 'A';
        for(int j = n-i-1;j>=0;j--){
            //here we did -1 in n-i-1 because we end ate zero which is an index
            printf("%c ",ch);
            ch = ch + 1;
        }
        printf("\n");
    }
}