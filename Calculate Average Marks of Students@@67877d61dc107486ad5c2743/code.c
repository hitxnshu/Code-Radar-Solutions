#include<stdio.h>
struct record {
    int num;
    char name[20];
    float marks;
};
int main(){
    int n;
    float temp = 0;
    scanf("%d",&n);
    struct record s[n]
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
        temp = temp + s[i].marks;
    }
       int average = temp / n;
        printf("Average Marks: %.2f",average);

}