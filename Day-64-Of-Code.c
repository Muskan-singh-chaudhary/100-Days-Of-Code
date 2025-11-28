Q127: Convert lowercase to uppercase in file
#include <stdio.h>

int main() {
    FILE *input, *output;
    char ch;
    
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Could not open input.txt!\n");
        return 1;
    }
    
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(input);
        return 1;
    }
    
    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, output);
    }
    
    printf("File converted successfully!\n");
    printf("Output saved to output.txt\n");
    
    fclose(input);
    fclose(output);
    
    return 0;
}

Q128: Count vowels and consonants in file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    fclose(file);
    
    printf("\nFile Analysis:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}
