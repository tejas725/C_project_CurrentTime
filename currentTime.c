#include <stdio.h>
#include <time.h>

int main() {
    // Declare a variable to hold the current time
    time_t current_time;
    
    // Get the current time
    time(&current_time);
    
    // Convert the time to a human-readable string
    char *time_str = ctime(&current_time);
    
    // Print the current time
    printf("Current time: %s", time_str);
    
    return 0;
}
