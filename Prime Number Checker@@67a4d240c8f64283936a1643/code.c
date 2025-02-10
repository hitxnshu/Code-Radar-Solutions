#include <stdio.h>

int main(){
    int t,found = 0;
    scanf("%d",%t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
int isPrime(int num){
    
    for(int i = 2;i < num;i++){
       if(num%2==0){
        found = 1;
       }
    }
    if(!found){
        return 1;
    }
    else{
        return 0;
    }
}