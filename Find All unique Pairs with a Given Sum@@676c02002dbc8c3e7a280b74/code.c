#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    int printed = 0;
    scanf("%d",&target);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i!=j){
                if((arr[i]+arr[j])==target){
                    if(arr[i] == arr[j]){
                    if(!printed){
                    printf("%d %d\n",arr[i],arr[j]);
                    printed = 1;}

                }
                else{
                    printf("%d %d\n",arr[i],arr[j]);
                }}
            }
        }
    }
}