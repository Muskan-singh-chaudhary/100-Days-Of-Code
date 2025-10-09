1. Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    scanf("%s", str);
    len = strlen(str);
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}

2. Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    scanf("%s", str);  
    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
