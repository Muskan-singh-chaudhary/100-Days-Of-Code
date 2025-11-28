Q133: Enum for months with days count
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month month;
    
    printf("Months and their days:\n");
    
    for (month = JANUARY; month <= DECEMBER; month++) {
        printf("Month %d: ", month);
        
        switch(month) {
            case JANUARY:
                printf("January - 31 days\n");
                break;
            case FEBRUARY:
                printf("February - 28/29 days\n");
                break;
            case MARCH:
                printf("March - 31 days\n");
                break;
            case APRIL:
                printf("April - 30 days\n");
                break;
            case MAY:
                printf("May - 31 days\n");
                break;
            case JUNE:
                printf("June - 30 days\n");
                break;
            case JULY:
                printf("July - 31 days\n");
                break;
            case AUGUST:
                printf("August - 31 days\n");
                break;
            case SEPTEMBER:
                printf("September - 30 days\n");
                break;
            case OCTOBER:
                printf("October - 31 days\n");
                break;
            case NOVEMBER:
                printf("November - 30 days\n");
                break;
            case DECEMBER:
                printf("December - 31 days\n");
                break;
        }
    }
    
    return 0;
}

Q134: Enum for status codes
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;
    
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &status);
    
    switch(status) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed!\n");
            break;
        case TIMEOUT:
            printf("Operation timed out!\n");
            break;
        default:
            printf("Invalid status\n");
    }
    
    return 0;
}
