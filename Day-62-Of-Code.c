Q123: Count characters, words, and lines in file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }
    
    if (characters > 0 && ch != '\n') {
        lines++;
    }
    
    fclose(file);
    
    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}

Q124: Copy file contents
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char source_file[50], dest_file[50];
    char ch;
    
    printf("Enter source filename: ");
    scanf("%s", source_file);
    
    printf("Enter destination filename: ");
    scanf("%s", dest_file);
    
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }
    
    destination = fopen(dest_file, "w");
    if (destination == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("\nFile copied successfully from %s to %s!\n", source_file, dest_file);
    
    fclose(source);
    fclose(destination);
    
    return 0;
}
