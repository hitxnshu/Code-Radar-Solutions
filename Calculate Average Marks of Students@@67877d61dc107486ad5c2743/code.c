#include<stdio.h>
struct record {
    int num;
    char name[20];
    float marks;
};
int main(){
    int n;
    float temp;
    scanf("%d",&n);
    struct record s[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
        temp = temp + s[i].marks;
    }
       float average = temp / n;
        printf("Average Marks: %.2f",average);

}