#include<stdio.h>
int main(){
    int n;
    int boool = 0;
    scanf("%d",&n);
    int arr[n];
    int temp = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
if(n<=1){
    printf("-1");
}

for(int i = 0;i < n;i++){
    if(arr[i]!=arr[i+1]){
        printf("%d",arr[i+1]);
        boool = 1;
    }
 
}
if(!boool){
    printf("-1");
}
 
}