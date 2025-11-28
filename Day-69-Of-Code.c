Q137: Enum for user roles
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    
    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &role);
    
    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role\n");
    }
    
    return 0;
}

Q138: Print all enum names and values using loop
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    printf("Enum Color values:\n");
    
    for (int i = RED; i <= ORANGE; i++) {
        printf("Color %d: ", i);
        
        switch(i) {
            case RED:
                printf("RED\n");
                break;
            case GREEN:
                printf("GREEN\n");
                break;
            case BLUE:
                printf("BLUE\n");
                break;
            case YELLOW:
                printf("YELLOW\n");
                break;
            case ORANGE:
                printf("ORANGE\n");
                break;
        }
    }
    
    return 0;
}
