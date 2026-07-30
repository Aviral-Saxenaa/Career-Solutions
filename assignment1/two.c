#include <stdio.h>

int main() {
    
    int n=121;
    //palindrome or not
    int original=n;
    int reversed=0;
    while(n>0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    if(original==reversed){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }
}