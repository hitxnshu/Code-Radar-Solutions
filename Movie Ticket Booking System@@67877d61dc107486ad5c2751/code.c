#include<stdio.h>
struct movieticket{
    char name[20];
    char type[20];
    float price;
};
int main(){
    int n;
    float s,p,v;
    scanf("%d",&n);
    struct movieticket ticket[n];
    for(int i = 0;i < n;i++){
        scanf("%s",ticket[i].name);
        scanf("%s",&ticket[i].type);
        scanf("%f",&ticket[i].price);
    
    if(ticket[i].type == Standard){
        s = s + ticket[i].price;
    }
      else if(ticket[i].type == Premium){
        p = p + ticket[i].price;
    }
      else if(ticket[i].type == VIP){
        v = v + ticket[i].price;
    }
    }
printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",s,p,v);

}