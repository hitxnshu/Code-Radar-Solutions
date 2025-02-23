#include<stdio.h>
struct record {
    int id;
    char name[20];
    float bonus;
};
int main(){
    int n;
    scanf("%d",&n);
    struct record e[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&e[i].id);
        scanf("%s",&e[i].name);
        scanf("%f",&e[i].bonus);
        printf("Employee ID: %d, Name: %s, Bonus: %.2f",e[i].id,e[i].name,e[i].bonus);

    }

}