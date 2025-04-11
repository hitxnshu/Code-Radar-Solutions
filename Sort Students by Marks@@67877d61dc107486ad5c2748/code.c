#include<stdio.h>
struct Student{
    int roll;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    float temp = 0;
    struct Student s[n];
    for(int i = 0;i < n;i++){
    scanf("%d",&s[i].roll);
    scanf("%s",&s[i].name);
    scanf("%f",&s[i].marks);
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(s[i].marks>s[j].marks){
                struct Student temp = s[i];// IT SWAPS FULL STRUCTURE 
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = n-1;i >= 0;i--){
        printf("Roll Number: %d, ",s[i].roll);
        printf("Name: %s, ",s[i].name);
        printf("Marks: %.2f\n",s[i].marks);
    }

}