#include<stdio.h>
struct movieticket{
    char name[20];
    char type[20];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct movieticket ticket[n];
    for(int i = 0;i < n;i++){
        scanf("%s",ticket[i].name);
        scanf("%s",&ticket[i].type);
        scanf("%f",&ticket[i].price);
    }
    for(int i = 0;i < n;i++){
        printf("%s: %.2f, ",ticket[i].type,ticket[i].price);
    }

}