Q141: Structure Student - read and print one student
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;
    
    printf("Enter student details:\n");
    
    printf("Name: ");
    scanf("%s", student.name);
    
    printf("Roll Number: ");
    scanf("%d", &student.roll_no);
    
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
    
    return 0;
}


Q142: Array of structures - store 5 students
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    
    printf("Enter details of 5 students:\n");
    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\n\nAll Student Details:\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("------------------------------------------------\n");
    
    for (i = 0; i < 5; i++) {
        printf("%-20s %-15d %-10.2f\n", 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }
    
    return 0;
}
