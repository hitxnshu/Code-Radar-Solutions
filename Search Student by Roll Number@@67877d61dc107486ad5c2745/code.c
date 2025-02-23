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
        scanf("%d",&si.num);
        scanf("%s",&si.name);
        scanf("%f",&si.marks);
    }
    int roll;
    for(int i = 0;i < n;i++){
    if(roll == si.num){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",si.num,si.name,si.marks);
    }}
}