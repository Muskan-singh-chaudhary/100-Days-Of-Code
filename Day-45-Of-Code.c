1. Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;
    scanf("%s", str);
    getchar();
    scanf("%c", &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }
    printf("%d", count);
    return 0;
}

2. Toggle case of each character in a string.
  
#include <stdio.h>

int main() {
    char str[100];
    int i;
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("%s", str);
    return 0;
}
