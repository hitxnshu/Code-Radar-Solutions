#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[10];
    int temp = 0;
    int tempo = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i = 0;i < n;i++){
       temp = arr1[i];
       int count = 0;
       for(int j = i;j < n;j++){
        if(arr1[j]==temp){
            count++;
        }
       }
       for(int i = 0;i < 10;i++){
        arr2[i] = count;
       }

    }
    for(int i = 0;i < n;i++){
        tempo = arr2[i];
        for(int j = i;j < n;j++){
            if(arr2[j]>tempo){
                tempo = arr2[j];
            }
        }

    }
    printf("%d",tempo);



}