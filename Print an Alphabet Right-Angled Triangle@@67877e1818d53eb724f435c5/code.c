#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        char ch = 'A';
        
        for(int j = 0;j<i+1;j++){

            printf("%c ",ch);
            ch = ch + 1;
        }
    
    printf("\n");}
    return 0;
}