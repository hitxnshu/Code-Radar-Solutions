#include <stdio.h>
int isPrime(int n){
    for(int i = arr[0];i < arr[n];i++){
        if(i < 2){
            return 0;
        }
        else if(i%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    if (isPrime(num)){
        count++;
    }
}