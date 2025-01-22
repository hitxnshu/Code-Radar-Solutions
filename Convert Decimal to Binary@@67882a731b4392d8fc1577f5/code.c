#include <stdio.h>
int main(){
    int n,temp,store,multi;
    scanf("%d",&n);
    while(n>0){
        temp = n % 2;
        store = store + (temp*multi);
        multi = multi * 10;
        n = n / 2;

    }
    printf("%d",store);
}