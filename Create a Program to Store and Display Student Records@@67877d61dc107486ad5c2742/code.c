#include<stdio.h>
struct record{
    int num;
    char name[20];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        struct record si;
        scanf("%d",&si.num);
        scanf("%s",&si.name);
        scanf("%f",&si.marks);
        for(int i = 0;i < n;i++){
    printf("Roll Number: %d, Name: %s, Marks: %.1f\n",si.num,si.name,si.marks);
    }
    }
}