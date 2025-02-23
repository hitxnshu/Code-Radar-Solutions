#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int main(){
    int n;
    scanf("%d",&n);
    struct rectangle r[n];
    for(int i = 0;i < n;i++){
        scanf("%d",r[i].length);
        scanf("%d",r[i].breadth);
    }
    float area,perimeter;
    for(int i = 0;i < n;i++){
        area = r[i].length * r[i].breadth;
        perimeter = 2 * (r[i].length + r[i].breadth);
        printf("Rectangle %d: Area = %f, Perimeter = %f",i+1,area,perimeter);
    }

}