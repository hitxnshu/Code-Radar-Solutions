#include <stdio.h>
int main(){
    int n,num = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
        visited[i] = 0;//here we have initialised visited array to mstop it from taking duplicate values
    }
    for(int i = 0;i < n;i++){
        if (visited[i] == 1){
            continue;
        }
        num = arr[i];
        int count = 0;  
        for(int j = i;j < n;j++){
        if(num==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        printf("%d %d\n",num,count);
    }
}