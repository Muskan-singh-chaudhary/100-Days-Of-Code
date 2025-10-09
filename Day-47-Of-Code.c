1. Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0}, i;
    scanf("%s", str1);
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }
    for(i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}

2. Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    fgets(str, sizeof(str), stdin);
    while(1) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';
            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
            if(str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}
