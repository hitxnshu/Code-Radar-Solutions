#include<stdio.h>
struct record{
    int num;
    char name[20];
    float marks;
}
int main(){
    int n;
    int found = 1;
    scanf("%d",&n);
    struct record s[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);

    }
    for(int i = 0;i < n;i++){
        if(s[i].marks < 50){
             printf("Not All Passed");
             found = 0;
        }

    }
    if(found){
        printf("All Passed");
    }
}