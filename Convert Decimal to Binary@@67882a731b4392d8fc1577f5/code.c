#include <stdio.h>
int main(){
    int n,new1,temp = 0,store = 0 ,multi=1,temp1 = 0,store1 = 0,multi1 = 1;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    while(n<0){
         new1 = -n;
    }
    
    while(n>0){
        temp = n % 2;
        store = store + (temp*multi);
        multi = multi * 10;
        n = n / 2;

    }
    while(new1>0){
        temp1 = new1%2;
        store1 = store1 + (temp1*multi1);
        multi1 = multi1 * 10;
        new1 = new1 / 2;
    }
    if(n>0){
    printf("%d",store);
    }
    else if(n<0){
        printf("%d",store1);
    }
    return 0;
}
