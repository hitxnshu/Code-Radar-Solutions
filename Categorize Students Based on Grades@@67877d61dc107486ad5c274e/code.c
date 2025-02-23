#include<stdio.h>
struct record {
    int num;
    char name[20];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct record s[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(int i = 0;i < n;i++){
        if(s[i].marks>=85){
            printf("Roll Number: %d, Name: %s, Grade: A",s[i].num,s[i].name);
        }
        if(s[i].marks<=84 && s[i].marks>=70){
            printf("Roll Number: %d, Name: %s, Grade: B",s[i].num,s[i].name);
        }
        if(s[i].marks<70){
            printf("Roll Number: %d, Name: %s, Grade: C",s[i].num,s[i].name);
        }
    }

}