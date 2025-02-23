#include<stdio.h>
#include<string.h>
struct record {
    char number[20];
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
        if(strcmp(v[i].vehicle, "Car") == 0){
           c = c + v[i].toll;
        }
        else if(strcmp(v[i].vehicle, "Truck") == 0){
           t = t + v[i].toll;
        }
        else if(strcmp(v[i].vehicle, "Bike") == 0){
           b = b + v[i].toll;
        }
        }
        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c,t,b);
    


}