#include <stdio.h>
int isPrime(int num){
    int found = 0;
    for(int i = 2;i < num;i++){
       if(num%i==0){
        found = 1;
       }
    }
    if(!found){
        return 1;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
