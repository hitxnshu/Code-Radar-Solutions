#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",ch);
    ch = toupper(ch);
    if(ch== 'R'){
        printf("Stop");
    }
    else if(ch=='G'){
        printf("Go");
    }
    else if(ch=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
   
}