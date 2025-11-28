Q93: Check if two strings are anagrams of each other.
  #include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, is_anagram = 1;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    printf("First string: %s", str1);
    printf("Second string: %s", str2);
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
        else if (str1[i] >= 'A' && str1[i] <= 'Z') {
            count1[str1[i] - 'A']++;
        }
    }
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
        else if (str2[i] >= 'A' && str2[i] <= 'Z') {
            count2[str2[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            is_anagram = 0;
            break;
        }
    }
    
    if (is_anagram == 1) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }
    
    return 0;
}

Q94: Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0, current_length = 0, max_length = 0;
    int start_pos = 0, longest_start = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Sentence: %s", sentence);
    
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        if (sentence[i] != ' ') {
            if (current_length == 0) {
                start_pos = i; 
            }
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                longest_start = start_pos;
            }
            current_length = 0;
        }
        i++;
    }
    if (current_length > max_length) {
        max_length = current_length;
        longest_start = start_pos;
    }
     printf("Longest word: ");
    for (i = longest_start; i < longest_start + max_length; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");
    printf("Length: %d\n", max_length);
     return 0;
}
