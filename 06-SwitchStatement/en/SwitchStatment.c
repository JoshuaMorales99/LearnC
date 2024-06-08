#include <stdio.h>

int main() {
    int day = 7;

    // Evaluate the day.
    switch (day) {
        // Code block for the situation where day is 1.
        case 1:
            printf("Monday\n");
            break;

        // Code block for the situation where day is 2.
        case 2:
            printf("Tuesday\n");
            break;
        
        // Code block for the situation where day is 3.
        case 3:
            printf("Wednesday\n");
            break;

        // Code block for the situation where day is 4.
        case 4:
            printf("Thursday\n");
            break;

        // Code block for the situation where day is 5.
        case 5:
            printf("Friday\n");
            break;

        // Code block for the situation where there is no match with the other cases.
        default:
            printf("It's the weekend!\n");
    }

    return 0;
}