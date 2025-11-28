Q131: Enum for days of week
#include <stdio.h>

enum Days {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    printf("Days of the Week:\n");
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);
    
    return 0;
}

Q132: Enum for traffic lights
#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    
    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);
    
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }
    
    return 0;
}
