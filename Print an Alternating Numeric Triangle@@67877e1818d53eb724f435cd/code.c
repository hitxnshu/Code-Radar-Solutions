#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i==j){
                printf("1 ");
            }
            else if(i-j==1){
                printf("0 ");
            }
            else if(i-j==2){
                printf("1 ");
            }
            else if(i-j==3){
                printf("0 ");
            }
            else if(i-j==4){
                printf("1 ");
            }
            else if(i-j==5){
                printf("0 ");
            }
            else if(i-j==6){
                printf("1 ");
            }
            else if(i-j==7){
                printf("0 ");
            }
        }
        printf("\n");
    }
}