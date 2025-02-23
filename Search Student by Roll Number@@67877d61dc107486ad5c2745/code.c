#include<stdio.h>
struct record{
    int num;
    char name[20];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct record si[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&si[i].num);
        scanf("%s",&si[i].name);
        scanf("%f",&si[i].marks);
    }
    int roll;
    int found = 0;
    scanf("%d",&roll);
    for(int i = 0;i < n;i++){
    if(roll == si[i].num){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",si[i].num,si[i].name,si[i].marks);
        found = 1;
        break;

    }}
    if(!found){
    printf("Student not found");
    }
}