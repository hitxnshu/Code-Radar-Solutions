#include<stdio.h>
struct record{
    int num;
    char name[20];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        struct record si;
        scanf("%d",&si[i].num);
        scanf("%s",&si[i].name);
        scanf("%f",&si[i].marks);
    }
    int roll;
    scanf("%d",&roll);
    for(int i = 0;i < n;i++){
    if(roll == si[i].num){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",si.num,si.name,si.marks);
    }}
}