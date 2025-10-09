1. Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100];
    int i;
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            continue;
        else
            printf("%c", str[i]);
    }
    return 0;
}

2. Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
        if(freq[str[i] - 'a'] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }
    printf("No repeating character");
    return 0;
}
