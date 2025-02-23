#include<stdio.h>
struct record {
    int num;
    char name[20];
    float marks;
};
int main(){
    int n,temp = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        struct record si;
        scanf("%d",&si.num);
        scanf("%s",&si.name);
        scanf("%f",&si.marks);
        temp = temp + si.marks;
    }
       int average = temp / n;
        printf("Average Marks: %.2f",average);

}