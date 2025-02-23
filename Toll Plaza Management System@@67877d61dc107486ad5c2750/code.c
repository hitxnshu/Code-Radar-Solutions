#include<stdio.h>
struct record {
    int number[20];
    char vehicle[20];
    float toll;
};
int main(){
    int n;
    float c,t,b;
    scanf("%d",&n);
    struct record v[n];
    for(int i = 0;i < n;i++){
        scanf("%s",&v[i].number);
        scanf("%s",&v[i].vehicle);
        scanf("%f",&v[i].toll);
        if(v[i].vehicle == Car){
           c = c + v[i].toll;
        }
        else if(v[i].vehicle == Truck){
           t = t + v[i].toll;
        }
        else if(v[i].vehicle == Bike){
           b = b + v[i].toll;
        }
        }
        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c,t,b);
    


}