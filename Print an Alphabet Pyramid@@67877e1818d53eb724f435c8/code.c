#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        char ch = 'A';
        while(ch < 'Z'){
        for(int j = 0;j < n;j++){
            printf("%c",ch);
        }
        printf(" ");
    }}
}