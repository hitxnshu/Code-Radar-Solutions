#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0){
      if(year%100!=0){
        printf("Leap Year");
        break;
      }
      else{
        printf("Not a Leap Year");
        break;
      }
    }
    if(year%400==0){
        printf("Leap Year");
        break;
    }
}