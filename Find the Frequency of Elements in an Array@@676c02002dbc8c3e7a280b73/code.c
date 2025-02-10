#include <stdio.h>
int main(){
    int n,num = 0,count;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        num = arr[i];
         count = 0;
        for(int j = i+1;j < n;j++){
        if(num==arr[j]){
                count++;
            }
        }
        printf("%d %d",&num,&count);
    }
}