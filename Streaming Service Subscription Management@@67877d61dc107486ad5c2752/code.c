#include<stdio.h>
#include<string.h>
struct subscription {
    char name[20];
    char type[20];
    float cost;
};
int main(){
    int n;
    float b,p,st;
    int count1 = 0,count2 = 0,count3 = 0;
    scanf("%d",&n);
    struct subscription s[n];
    for(int i = 0;i < n;i++){
        scanf("%s",&s[i].name);
        scanf("%s",&s[i].type);
        scanf("%f",&s[i].cost);
        if(strcmp(s[i].type, "Basic") == 0){
           b = b + s[i].cost;
           count1++;
        }
        else if(strcmp(s[i].type, "Standard") == 0){
           st = st + s[i].cost;
           count2++;
        }
        else if(strcmp(s[i].type, "Premium") == 0){
           p = p + s[i].cost;
           count3++;
        }
        }
        printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",count1,b,count2,st,count3,p);
    


}