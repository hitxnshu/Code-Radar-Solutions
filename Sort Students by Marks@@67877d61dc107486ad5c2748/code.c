#include<stdio.h>
struct Student{
    int roll;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    int temp = 0;
    struct Student s[n];
    for(int i = 0;i < n;i++){
    scanf("%d",&s[i].roll);
    scanf("%s",&s[i].name);
    scanf("%f",&s[i].marks);
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(s[i].marks>s[j].marks){
                temp = s[i].marks;
                s[i].marks = s[j].marks;
                s[j].marks = temp;
            }
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d",s[i].roll);
        printf("%s",s[i].name);
        printf("%f",s[i].marks);
    }

}