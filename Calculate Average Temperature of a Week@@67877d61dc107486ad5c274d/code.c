#include<stdio.h>
#include<string.h>
struct temperature {
    char day[20];
    float temp;
};
int main(){
    struct temperature t[7];
    float temp;
    for(int i = 0;i < 7;i++){
        scanf("%s",&t[i].day);
        scanf("%f",&t[i].temp);
        temp = temp + t[i].temp;
    }
    float avg = temp / 7;
    printf("Average Temperature: %.2f",avg);
    

    


}