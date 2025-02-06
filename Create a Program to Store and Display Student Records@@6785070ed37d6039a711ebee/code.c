#include <stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        struct student si;
        scanf("%d",&si.roll);
        printf("Roll Number: %d, ",si.roll);
        scanf("%s",&si.name);
        printf("Name: %s, ",si.name);
        scanf("%f",&si.marks);
        printf("Marks: %f\n",si.marks);
    }
}