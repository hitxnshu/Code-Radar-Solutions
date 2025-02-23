#include<stdio.h>
struct library{
    char title[20];
    char author[20];
    float price;
};
int main(){
int n;
scanf("%d",&n);
struct library b[n];
for(int i = 0;i < n;i++){
    scanf("%s",&b[i].title);
    scanf("%s",&b[i].author);
    scanf("%f",&b[i].price);
}
float threshold;
scanf("%f",&threshold);
printf("Books above price %.2f:\n",threshold);
for(int i = 0;i < n;i++){
    if(b[i].price>=threshold){
        printf("Title: %s, Author: %s, Price: %.2f\n",b[i].title,b[i].author,b[i].price);
    }
}}
//keep in mind the format specifier for every element