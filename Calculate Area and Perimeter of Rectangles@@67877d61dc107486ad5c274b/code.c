#include<stdio.h>
struct rectangle{
    float length;
    float breadth;
};
int main(){
    int n;
    scanf("%d",&n);
    struct rectangle r[n];
    for(int i = 0;i < n;i++){
        scanf("%f",r[i].length);
        scanf("%f",r[i].breadth);
    }
    float area,perimeter;
    for(int i = 0;i < n;i++){
        area = r[i].length * r[i].breadth;
        perimeter = 2 * (r[i].length + r[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i+1,area,perimeter);
    }

}