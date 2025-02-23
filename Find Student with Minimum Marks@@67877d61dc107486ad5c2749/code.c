#include<stdio.h>
struct record {
    int num;
    char name[20];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    struct record s[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);

    }
    int temp = s[0].marks;
    int k = 0;
    for(int j = 1;j < n;j++){
        if(s[j].marks<temp){
            temp = s[j].marks;
            k = j;

        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",s[k].num,s[k].name,s[k].marks);
}