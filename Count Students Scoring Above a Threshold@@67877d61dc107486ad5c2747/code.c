#include<stdio.h>
struct record{
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
    float thr;
    int count = 0;
    scanf("%f",&thr);
    for(int i = 0;i < n;i++){
        if(s[i].marks>thr){
            count++;
        }
    }
    printf("Count of students scoring above %.2: f%d",thr,count);
}