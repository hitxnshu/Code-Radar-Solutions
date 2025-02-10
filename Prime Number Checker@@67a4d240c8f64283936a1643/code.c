#include <stdio.h>

int main(){
    int t;
    scanf("%d",%t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
void isPrime(int num){
    int found = 0;
    for(int i = 2;i < num;i++){
       if(num%2==0){
        found = 1;
       }
    }
    if(!found){
        printf("1");
    }
    else{
        printf("-1");
    }
}