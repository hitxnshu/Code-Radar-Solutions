#include <stdio.h>
#include<string.h>
int main(){
    char string[20];
    scanf("%s",string);
    char a,b;
    scanf(" %c",&a);
    scanf(" %c",&b);
    int length = strlen(string);
    for(int i = 0; i < length;i++){
        if(string[i]==a){
            string[i] = b;
            
        }
    }
    printf("%s",string);
    
}
//mistakes
//1.&string - string (in both scan and print)
//using strlen instead of sizeof
//also dont give new line when taking two char input
//IMPORTANT- space before %c in scanf because scanf
//✅ scanf(" %c", &a); → Skips any whitespace before reading a.
//✅ scanf(" %c", &b); → Ensures b is read properly.