#include <stdio.h>
int main(){
    if(n==0){
        printf("0");
    }
    int n,temp = 0,store = 0 ,multi=1;
    scanf("%d",&n);
    while(n>0){
        temp = n % 2;
        store = store + (temp*multi);
        multi = multi * 10;
        n = n / 2;

    }
    printf("%d",store);
    return 0;
}