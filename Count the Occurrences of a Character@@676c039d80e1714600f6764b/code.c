#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[20];
    scanf("%s",&string);
    char ch;
    scanf(" %c",&ch);
    char ch1 = toupper(ch);
    int count = 0;
    int length = strlen(string);
    for(int i = 0;i < length;i++){
        if((string[i]==ch)||(string[i]==ch1)){
            count++;
        }
    }
    printf("%d",count);
}

//MISTAKE
/*Issue with scanf("%c", &ch); after string input.
When using scanf("%s", string);, the newline character ('\n') remains in the input buffer.
So, scanf("%c", &ch); captures this newline instead of the actual character input.
Fix: Use scanf(" %c", &ch); (with a space before %c) to consume any leftover whitespace */