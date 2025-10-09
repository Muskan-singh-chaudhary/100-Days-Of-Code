1. Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    fgets(str, sizeof(str), stdin);
    if(str[0] != ' ')
        printf("%c.", str[0]);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
            printf("%c.", str[i + 1]);
    }
    return 0;
}


2. Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], last[50];
    int i, j = 0, len;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for(i = len - 2; i >= 0; i--) {
        if(str[i] == ' ') {
            strcpy(last, &str[i + 1]);
            break;
        }
    }
    if(str[0] != ' ')
        printf("%c.", str[0]);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n' && str[i + 1] != last[0])
            printf("%c.", str[i + 1]);
    }
    printf(" %s", last);
    return 0;
}
