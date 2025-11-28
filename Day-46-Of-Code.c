Q91: Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Original string: %s", str);
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    
    printf("String after removing vowels: %s\n", str);
    
    return 0;
}

Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, j;
    char first_repeat = '\0';
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("String: %s", str);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
                if (str[i] == str[j]) {
                    first_repeat = str[i];
                    break;
                }
            }
            if (first_repeat != '\0') {
                break;
            }
        }
    }
    
    if (first_repeat != '\0') {
        printf("First repeating lowercase alphabet: '%c'\n", first_repeat);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }
    
    return 0;
}
  
