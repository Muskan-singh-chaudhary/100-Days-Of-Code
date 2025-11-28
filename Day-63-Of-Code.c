Q125: Append text to file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    file = fopen(filename, "a");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    fprintf(file, "%s", text);
    
    fclose(file);
    
    printf("\nText successfully appended to %s!\n", filename);
    
    return 0;
}

Q126: Check if file exists and display contents
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char line[200];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    
    printf("File opened successfully.\n");
    printf("\nFile contents:\n");
    printf("---------------------\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    printf("---------------------\n");
    
    fclose(file);
    
    return 0;
}
