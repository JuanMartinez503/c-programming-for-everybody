#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int maxval = 0; // Declare maxval variable
    int minval = 0; // Declare minval variable
    char line[1000];
    
    while (1) {
        if (gets(line) == NULL) {
            break;
        }
        line[strcspn(line, "\n")] = '\0'; // Remove trailing newline character
        
        if (strcmp(line, "done") == 0) {
            break;
        }
        
        int ival = atoi(line);
        
        if (maxval == 0 || ival > maxval) {
            maxval = ival;
        }
        
        if (minval == 0 || ival < minval) {
            minval = ival;
        }
    }
    
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
    
    return 0;
}