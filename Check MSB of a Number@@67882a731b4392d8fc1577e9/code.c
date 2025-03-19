#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    ans = 1 << (int)log2(n);
    printf("%d",ans);
}