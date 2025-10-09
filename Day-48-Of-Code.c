1. Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    scanf("%s", str1);
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2))
        printf("Rotation");
    else
        printf("Not rotation");
    return 0;
}

2. Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start = 0, end, len;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    while(i <= len) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;
            while(end >= start) {
                printf("%c", str[end]);
                end--;
            }
            if(str[i] == ' ')
                printf(" ");
            start = i + 1;
        }
        i++;
    }
    return 0;
}
