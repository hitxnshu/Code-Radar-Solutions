#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        char ch = 'A';
        for(int j = n-1;j>=0;j--){
            printf("%c",ch);
            ch = ch + 1;
        }
    }
}