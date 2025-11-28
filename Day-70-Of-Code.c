Q139: Show that enums store integers
#include <stdio.h>

enum Priority {
    LOW = 1,
    MEDIUM = 5,
    HIGH = 10,
    CRITICAL = 20
};

int main() {
    enum Priority p1 = LOW;
    enum Priority p2 = HIGH;
    
    printf("Enums are stored as integers:\n");
    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
    
    printf("\nVariable p1 = %d\n", p1);
    printf("Variable p2 = %d\n", p2);
    
    printf("\nArithmetic operations:\n");
    printf("p1 + p2 = %d\n", p1 + p2);
    printf("p2 - p1 = %d\n", p2 - p1);
    
    return 0;
}

Q140: Struct with enum Gender
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person person;
    
    printf("Enter name: ");
    scanf("%s", person.name);
    
    printf("Enter age: ");
    scanf("%d", &person.age);
    
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &person.gender);
    
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Gender: ");
    
    switch(person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    
    return 0;
}
