#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a ,&b);
    c = a*a;
    if(c==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}