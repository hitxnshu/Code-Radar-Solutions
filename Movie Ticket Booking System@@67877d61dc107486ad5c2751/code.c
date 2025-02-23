#include<stdio.h>
struct movieticket{
    char name[20];
    char type[20];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct movieticket[n];
    for(int i = 0;i < n;i++){
        scanf("%s",&movieticket[i].name);
        scanf("%s",&movieticket[i].type);
        scanf("%f",&movieticket[i].price);
    }
    for(int i = 0;i < n;i++){
        printf("%s: %.2f, ",movieticket[i].type,movieticket[i].price);
    }

}