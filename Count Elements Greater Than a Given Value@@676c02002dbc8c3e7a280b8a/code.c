#include <stdio.h>
int main(){
    int a,b,count = 0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int i = 0;i < a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < a;i++){
        if(arr[i]>b){
            count++;
        }
    }
    printf("%d",count);
}