#include <stdio.h>
int main(){
    int n,scmall;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int great = arr[0];
    for(int i = 1;i < n;i++){
        if (arr[i]>great){
            great = arr[i];
        }
    }
    int num = 0;
    int found = 0;

    for(int j = 1;j <100;j++){
        for(int i = 0; i < n; i++){
        if((great - j) == arr[i]){
            found = 1;
            num = arr[i];
            printf("%d ",num);
            return 0;
        }
    }
    
}
if(!found){
    printf("-1");
}}
//MISTAKE
//here we wrote break instead of return 0 ,therefore we couldnt come come out of 'j' vala loop
