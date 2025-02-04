#include <stdio.h>
int main(){
    int n,even = 0,found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i]%2==0){
            even = arr[i];
            found = 1;
        }
        
    for(int i = 0;i < n;i++){
        if(arr[i]%2==0){
            if(arr[i]>even){
                even = arr[i];
            }
        }
    }

    

}
if(!found){
    printf("-1");
}printf("%d",even);}